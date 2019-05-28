#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXV = 510;
const int INF = 0x3fffffff;

int n, m, st, ed, G[MAXV][MAXV], cost[MAXV][MAXV];


int d[MAXV], c[MAXV], pre[MAXV];

bool vis[MAXV] = {false};


void dj(int s)
{
	fill(d, d + MAXV, INF);
	fill(c, c + MAXV, INF);
	for (int i = 0; i < n; ++i)
	{
		pre[i] = i;
	}
	d[s] = 0;
	c[s] = 0;
	for (int i = 0; i < n; ++i)
	{
		int u = -1, MIN = INF;
		for (int j = 0; j < n; ++j)
		{
			if (vis[j] == false && d[j] < MIN)
			{
				u = j;
				MIN = d[j];
			}
		}
		if (u == -1)
			return;
		vis[u] = true;
		for (int v = 0; v < n; ++v)
		{
			if (vis[v] == false && G[u][v] != INF)
			{
				if (d[u] + G[u][v] < d[v])
				{
					d[v] = d[u] + G[u][v];
					c[v] = c[u] + cost[u][v];
					pre[v] = u;
				} else if (d[u] + G[u][v] == d[v])
				{
					if (c[u] + cost[u][v] < c[v])
					{
						c[v] = c[u] + cost[u][v];
						pre[v] = u;
					}
				}
			}
		}
	}
}

void dfs(int v)
{
	if (v == st)
	{
		cout << v;
		return;
	}
	dfs(pre[v]);
	cout << v;
}

vector<int> Pre[MAXV];
vector<int> tempPath,path;
int minCost;

void dfs2(int v)
{
	if (v == st)
	{
		tempPath.push_back(v);
		int tempcost= 0;
		for(int i = tempPath.size() - 1 ; i > 0 ; i--)
		{
			int id = tempPath[i],idnext = tempPath[i - 1];
			tempcost +=cost[id][idnext];
		}

		if (tempcost < minCost)
		{

			minCost = tempcost;
			path = tempPath;
		}
		tempPath.pop_back();
		return;
	}
	tempPath.push_back(v);
	for (int i = 0; i < Pre[v].size(); ++i)
	{
		dfs2(Pre[v][i]);
	}
	tempPath.pop_back();
}
int main()
{
	cin >> n >> m >> st >> ed;
	int u, v;
	fill(G[0], G[0] + MAXV * MAXV, INF);
	for (int i = 0; i < m; ++i)
	{
		cin >> u >> v;
		cin >> G[u][v] >> cost[u][v];
		G[u][v] = G[v][u];
		cost[v][u] = cost[u][v];
	}
	dj(st);
	dfs(ed);
	cout << d[ed] << d[c];
	return 0;
}