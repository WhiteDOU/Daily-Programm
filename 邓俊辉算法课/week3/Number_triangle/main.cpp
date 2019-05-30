#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> D;
vector<vector<int>> Solution;
int n;

//Violence Solution
int maxSum(int i,int j)
{
    if(i==n)
        return D[i][j];
    int x=maxSum(i+1,j);
    int y=maxSum(i+1,j+1);
    return max(x,y)+D[i][j];
}
//DP
void maxSum1(int n,int i,int j)
{
    if(i==1)
    {
        Solution[i][i]=D[i][i];
    }
   if(i<=n&&j<=n)
   {
       Solution[i][j]=D[i][j]+max(Solution[i-1][j],Solution[i-1][j-1]);
   }

}

int get_answer(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,Solution[n][i]);
    }
    return ans;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}