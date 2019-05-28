#include <cstdio>
#include <queue>
#include <vector>


#include <iostream>

using namespace std;

const int MAXN = 100;
const int INF = 0x3fffffff;

int n, graph[MAXN][MAXN];
bool vis[MAXN] = {false};

struct Node
{
	int v;
	int w;
	int index;
	Node(int _v, int _w) : v(_v), w(_w)
	{}
};

vector<Node> adj[MAXN];
//
//
//void dfs(int u)
//{
//    vis[u] = true;
//    for (int v = 0; v < n ; ++v)
//    {
//        if (vis[v] == false && graph[u][v] != INF)
//            dfs(v);
//    }
//}
//void dfsAll()
//{
//    for (int u = 0; u < n; ++u)
//    {
//        if (vis[u] == false)
//            dfs(u);
//    }
//}


void dfs(int u)
{
	vis[u] = true;
	for (int i = 0; i < adj[u].size(); ++i)
	{
	  int temp =  adj[u][i].v;
		if (vis[temp] == false)
		{
			dfs(temp);
		}
	}
}

void dfsall()
{
	for (int i = 0; i < new ; ++i)
	{
		if (vis[i] == false)
			dfs(i);
	}
}

int main()
{
	adj[1].push_back(Node(3, 4));
}