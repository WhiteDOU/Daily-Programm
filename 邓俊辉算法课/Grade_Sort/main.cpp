#include <iostream>
#include <vector>
using namespace std;

vector<int> getAnswer(int n,vector<int> A,vector<int> DS)
{
    vector<int> sum,id;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        id.push_back(i+1);
        sum.push_back(A[i]+DS[i]);
    }
    int cnt=0;

    for(int i=0;i<n;i++)
        for(int j=n-1;j>0;j--)
        {
            if(sum[j]<sum[j-1]||
            sum[j]==sum[j-1]&&A[j]>A[j-1])
            {
                swap(id[j],id[j-1]);
                swap(sum[j],sum[j-1]);
                swap(A[j],A[j-1]) ;
                swap(DS[j],DS[j-1]);
                ++cnt;
            }
        }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}