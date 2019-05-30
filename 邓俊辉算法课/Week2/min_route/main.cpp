#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const  int N=10005;
vector<int> mind;
vector<int> flag;
typedef pair<int,int>  pii;
vector<pii> graph[N];
priority_queue<pii,vector<pii>,greater<pii>> pq;//顺序颠倒一下
//graphi放的是节点I的初编，其中first存储到达的节点，second存储边权
//pq为优先级队列辅助存储
//flag记录每个节点是否进行过松弛，1表示进行过，0表示未进行
//mind存储起点s到每个节点的最短路径长度


//UVW 存放各边的两端点、边权
//s l表示起点的重点
//返回值 s到l的最短路径长度
int shortestPath(int n,int m,vector<int> U,vector<int> V,vector<int> W,int s,int L)
{
    //初始化、清空 pq，graph mind flag
    while (!pq.empty())
        pq.pop();
    for(int i=1;i<=n;i++)
    {
        graph[i].clear();

    }


    memset(mind,127,sizeof(mind));
    memset(flag,0, sizeof(flag));
    //建图
    for (int i = 0; i <n ; ++i) {
        graph[U[i]].push_back(make_pair(V[i],W[i]));
        graph[V[i]].push_back(make_pair(U[i]),W[i]);
    }
    mind[s]=0;
    pq.push(make_pair(mind[s],s);

    while (!pq.empty())
    {
        int u=pq.top().second;// 把端点放在了second字段
        pq.pop();
        if (!flag[u])//是否做过松弛，最多使用一次松弛操作
        {
            flag[u]=1;
            for (vector<int>::iterator it=graph[u].begin();it!=graph[u].end();it++)
            {
                int v=it->second;
                int w=it->first;
                if (mind[v]<=mind[u]+w)
                continue;
                mind[v]=mind[u]+w;
                pq.push(make_pair(mind[v],v));
            }
        }
        return mind[L];
    }

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}