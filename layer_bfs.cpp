#include <iostream>
#include <cstring>

#include <vector>
#include <queue>
using namespace std;
const int MAXV = 1010;

struct Node
{
	int id;
	int layer;
};

vector<Node> adj[MAXV];
bool vis[MAXV] = {false};


int bfs(int s,int L)
{
	int numfor = 0;
	queue<Node> q;
	Node start;
	start.id = 0;
	q.push(start);
	vis[start.id] = true;
	while (!q.empty())
	{
		Node now = q.front();
		q.pop();
		int u = now.id;
		for (int i = 0; i < adj[u].size(); ++i)
		{
			Node next = adj[u][i];
			next.layer = now.layer + 1;
			if (vis[next.id] == false && next.layer<=L)
			{
				q.push(next);
				vis[next.id] = true;
				numfor++;
			}
		}
	}
	return numfor;
	
}
