#include <iostream>
#include <cstring>

#include <vector>
#include <queue>

using namespace std;
const int MAXV = 1010;

const int INF = 0x3fffffff;

int n, graph[MAXV][MAXV];

int d[MAXV];
bool vis[MAXV];
//
//void dj(int s)
//{
//    fill(d, d + MAXV, INF);
//    d[s] = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        int u = -1,MIN = INF;
//        for (int j = 0; j < n; ++j)
//        {
//            if (vis[j] == false && d[j] < MIN)
//            {
//                u = j;
//                MIN = d[j];
//            }
//        }
//        if (u == -1)
//            return;
//        vis[u] == true;
//        for (int v = 0; v < n; ++v)
//        {
//            if (vis[v] = false&& graph[u][v]!=INF&&d[u]+graph[u][v] < d[v])
//            {
//                d[v] = d[u] + graph[u][v];
//            }
//        }
//    }
//    
//}
int pre[MAXV];
int num[MAXV]''

void dj(int s)
{
	fill(d, d + MAXV, INF);
	d[s] = 0;
	for (int i = 0; i < n; ++i)
	{
		int u = -1, Min = INF;
		for (int j = 0; j < n; ++j)
		{
			if (vis[j] == false && d[j] < Min)
			{
				u = j;
				Min = d[j];
			}
		}
		if (u == -1)
			return;
		vis[u] = true;
		for (int v = 0; v < n; ++v)
		{
			if (vis[v] == false && graph[u][v] != INF && d[v] > graph[u][v] + d[u])
			{
				d[v] = d[u] + graph[u][v];
				pre[v] = u;
			}
			if (vis[v] == false && graph[u][v] !=INF)
			{
				if (d[v] + graph[u][v] < d[v])
				{
					d[v] = d[u] + graph[u][v];
					num[v] = num[u];
				} else if(d[u] + graph[u][v] == d[v])
					num[v] += num[u];
			}
		}
	}
}

void dfs(int s,int v)
{
	if (v == s)
	{
		cout << s;
		return;
	}

	dfs(s,pre[v]);
	cout << v;
}