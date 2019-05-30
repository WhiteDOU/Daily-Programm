#include <iostream>
#include <vector>
using namespace std;

const  int N=505*2,M=N*N;
struct  E
{
    //next下一条邻接边
    //to本条边所指向的终点
    int next,to
}e[M];
//邻接表大小
//mc表示每个点所匹配到到另一个点---match
//vis v集合是否被访问过
//ihead邻接表的头
int cnt,ihead[N],mc[N];
bool  vis[N];
//连一条x->y的有向边
void add(int x,int y)
{
    ++cnt;
    e[cnt].next=ihead[x];
    e[cnt].to=y;
    ihead[x]=cnt;
}

//x为x集上的点，从当前点找增广路
bool  dfs(int x)
{
    for(int i=ihead[x];i;i=  e[i].next)
    {
        int y=e[i].to;
        if(!vis[y])
        {
            vis[y]=true;
            if(mc[y]==0||dfs(mc[y]))
            {
                mc[x]=y;
                mc[y]=x;
                return true;
            }
        }
    }
    return false;
}

int get_answer(int n,vector<vector<int>> board)
{
    //将行看成n个点，将列看成另外n个点，标号为1～n和n+1到2n

    //初始化
    cnt=0;
    for(int i=1;i<=n*2;i++)
    {
        ihead[i]=0;
        mc[i]=0;
    }

    //连边单向就行，也就是mc的妙用
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(board[i-1][j-1]==1)
                add(i,j+n);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        if(mc[i])
        {
            memset(vis,0, sizeof(bool)*(n*2+1));
            if(dfs(i))
                ++ans;
        }

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}