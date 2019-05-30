#include <iostream>
#include <vector>
using namespace std;
bool  check(long long d,int n,int m, vector<int>& a)
{
    long long sum=0;
    int cnt=1;
    for(int i=0;i<a.size();i++)
    {
        if (a[i]>d)
            return false;

        sum+=a[i];
        if(sum>d)
        {
            sum=a[i];
            cnt++;
        }
    }

    return  cnt<=m;
}
long long get_answer(int n,int m,vector<int> a)
{
    long long l=1,r=0;
    for(int i=0;i<a.size();i++)
    {r+=a[i];}
//暴力解法
    for(long long d=1;d<=r;d++)
        if (check(d,n,m,a))
            return d;
    while(l<=r)
    {
        long long mid=(l+r)>>1;
        if(check(mid,n,m,a)
            r=mid-1;
        else
            l=mid+1;
    }

    return r+1;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}