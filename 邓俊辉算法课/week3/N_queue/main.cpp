#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
const int N=100005;
int c[N];
int flag=1;
//暴力
//c[i]指第i个皇后，放到c【i】
int  answer(int n)
{
    int ans=0;
    for(int i=0;i<n*n;i++)
    {
        int t=i;
        for(int j=0;j<n;j++)
        {
            c[j]=t%n;
            t/=n;
        }
        flag=1;
        for(int k=0;k<n;k++)
        {
            for(int m=k+1;m<n;m++)
            {
                if(c[k]==c[m]||fabs(m-k)==fabs(c[k]-c[m]))
                    flag=0;
                break;
            }
        }
        if (flag)
            ans++;

    }
    return ans;

}









//ans:总答案
//allone：用于二进制&的全1数
int ans,allOne;

//pos表示想应为已经放了一个皇后
//left表示当前的行想应位置不能放
//right也表示当前行所在的想应位置不能放皇后
void dfs(int pos,int left,int right)
{
    if(pos==allOne){
        ++ans;
        return;
    }
    for(int t=allOne&(~(pos|left|right));t;)
    {//这里的allone相当于掩码
        int p=t&-t;
        dfs(pos|p,(left|p)<<1,(right|p)>>1);
        t^=p;//抑或---消掉原来的操作
    }
}
int answer(int n)
{
    for (int    = 0;    < ; ++  ) {
        
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}