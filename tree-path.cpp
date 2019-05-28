#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using  namespace std;

const int MAXN = 110;

struct Node
{
	int weight;
	vector<int> child;
}node[MAXN];
bool cmp(int a,int b)
{
	return node[a].weight > node[b].weight;
}

int n,m,S;

int path[MAXN];

void dfs(int index,int numNode,int sum)
{
	if (sum >S)
		return;
	if (sum == S)
	{
		if (node[index].child.size()!=0)
			return;
		for (int i = 0; i < numNode; ++i)
		{
			cout << node[path[i]].weight;
		}
		return;
	}
	for (int i = 0; i < node[index].child.size(); ++i)
	{
		int child = node[index].child[i];
		path[numNode] = child;
		dfs(child,numNode+1,sum+node[child].weight);
	}
}