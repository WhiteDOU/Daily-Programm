#include <iostream>
#include <vector>

using namespace std;

const int N=10,mo=23333;

int f[N][N][N][N][N][N],n;

int dp(int x,int p,int c1,int c2,int c3,int c4)
{
    if(x==n+1)
        return 1;
    int &ans=f[x][p][c1][c2][c3][c4];
    if(ans!=-1)
        return ans;
    ans=0;
    if(p!=1&&c1>0)
    {
        ans+=dp(x+1,1,c1-1,c2,c3,c4);
    }
    if (p!=2&&c2>0)
        ans+=dp(x+1,2,c1,c2-1,c3,c4);
    if(p!=3&&c3>0)
        ans+=dp(x+1,3,c1,c2,c3-1,c4);
    if (p!=4&&c4>0)
        ans+=dp(x+1,4,c1,c2,c3,c4-1);
    return ans;
}

int getAnswer(int m,vector<int> a)
{
    memset(f,-1, sizeof(f));
    n=0;
    for(int i=0;i<m;i++)
        n+=a[i];
    return dp(1,0,a[0],a[1],a[2],a[3]);
}
//Violent_Solution
int answer(int n,vector<int> color)
{
    for(int i=0;i<n;i++)
    {

    }
}

void  paint(vector<int> ans,vector<int> &color,int x)
{
    if(color[x]==0)
        return;
    color[x]--;


}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}