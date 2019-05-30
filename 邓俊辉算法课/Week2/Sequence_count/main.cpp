#include <iostream>
#include<vector>

using namespace std;
//Direct
long long getAnswer(int n,int d,vector<int> a)
{
    long long ans=0;
    for(int i=0;i<a.size();i++)
    {
        int mx=a[i];
        int mn=a[i];
        for(int j=i+1;j<a.size();j++)
        {
            mx=max(mx,a[j]);
            mn=min(mn,a[j]);
            if(mx-mn<=d)
                ans++;

        }
    }
    return  ans;
}

vector<int> a;
const  int N=300005;
int min_value[N],max_value[N];
long long solve(int l,int r)
{
    if(l==r)
        return 0;

    int mid=(l+r)>>1;
    int ans=solve(l,mid)+solve(mid+1,r);

    //得到区间最小值的方法
    for(int i=mid+1;i<=r;i++)
    {
        min_value[i]=(i==mid+1)?a[i]:min(min_value[i-1],a[i]);
        max_value[i]=(i==mid+1)?a[i]:max(max_value[i-1],a[i]);
    }

    int mn=0,mx=0,pos=r;
    for(int i=mid;i>=1&&pos>mid;--i)
    {
        mn=(i==mid)?a[i]:min(mn,a[i]);
        mx=(i==mid)?a[i]:max(mx,a[i]);
    }

    for (;pos>mid&&max(mx,max_value[pos])-min(mn,min_value[pos])>d;--pos) {}
    ans+=pos-mid;

    return ans;
}
int n,d,max_value[N],min_value[N];
vector<int> a;
int main() {
    std::cout << "Hello, World!" << std::endl;
    while (1)
    {

    }
    return 0;
}