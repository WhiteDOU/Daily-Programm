#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>


using namespace std;


const int MAXN = 2010;

//int n ,graph[MAXN][MAXN];
//
//bool vis[MAXN] = {false};

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

vector<int> adj[MAXN];
int n;
bool vis[MAXN] = {false};

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	vis[u] = true;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for (int i = 0; i < adj[u].size(); ++i)
		{
			int v = adj[u][i];
			if (vis[v] == false)
			{
				q.push(v);
				vis[v] = true;
			}
		}
	}
}

void bfsTravel()
{
	for (int i = 0; i < n; ++i)
	{
		if (vis[i] == false)
		{
			bfs(i);
		}
	}
}