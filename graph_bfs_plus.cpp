#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>


using namespace std;


const int MAXN = 2010;

//int n ,graph[MAXN][MAXN];
//
bool vis[MAXN] = {false};

//
//void bfs(int u )
//{
//    queue<int> q;
//    q.push(u);
//    vis[u] = true;
//    while (!q.empty())
//    {
//        int u = q.front();
//        q.pop();
//        for (int i = 0; i < n; ++i)
//        {
//            if (graph[u][i]!=INT_MAX&&vis[i]== false)
//            {
//                q.push(i);
//                vis[i] = true;
//            }
//        }
//    }
//}
//
//void  bfsTrave()
//{
//    for (int i = 0; i < n; ++i)
//    {
//        if (vis[i] == false)
//            bfs(i);
//    }
//}


struct Node
{
	int v;
	int layer;

};
vector<Node> adj[MAXN];



void bfs(int s)
{
	queue<Node> q;
	Node start;
	start.v = s;
	start.layer = 0;
	q.push(start);
	vis[start.v] = true;
	while (!q.empty())
	{
		Node now = q.front();
		q.pop();
		int u = now.v;
		for (int i = 0; i < adj[u].size(); ++i)
		{
			Node next = adj[u][i];
			next.layer = now.layer+1;
			if (vis[next.v]== false)
			{
				q.push(next);
				vis[next.v] = true;
			}
		}
	}
}
