#include <iostream>
#include <vector>
using namespace std;

//0-1Knaps_problem
vector<vector<int>> solution;
const int N=100005;

vector<int> w;
vector<int> v;
int Knapsack0_1(int n,int max1)
{
    for (int i = 1; i <=n ; ++i) {
        for (int j = 0; j <=max1 ; ++j) {
            solution[i][j]= max(solution[i-1][j],solution[i-1][j-w[i]]+v[i]);
        }
    }
}

int mix_knapsack(int n,int v,vector<int> t,vector<int> w,vector<int> v)
{
    for(int i=0;i<n;i++)
    {
        if (t[i]==0)
            for(int j=v;j>=v[i];j--)
                f[j]=max(f[j],f[j-v[i]]+w[i]);
            else
                for(int j=v[i];j<=v;j++)
                    f[j]=max(f[j],f[j-v[i]]+w[i]);
    }
    return f[v];
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}