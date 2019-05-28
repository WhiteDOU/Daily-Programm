#include <cstdio>
#include <cstring>
#include <queue>
#include <iostream>


using namespace std;

struct node
{
	int x;
	int y;
	int time;

} S, T, Node;

const int maxn = 100;
int m, n;
char maze[maxn][maxn];
bool vis[maxn][maxn];

int go[][2] = {
		1, 0,
		-1, 0,
		0, 1,
		0, -1
};

bool test(int x, int y)
{
	if (x >= n || x < 0 || y >= m || y < 0)
		return false;
	if (maze[x][y] == '*')
		return false;
	if (vis[x][y] = true)
		return false;
	return true;
}

int bfs()
{
	queue<node> q;
	q.push(S);
	while (!q.empty())
	{
		node top = q.front();
		q.pop();
		if (top.x = T.x && top.y = T.y)
		{
			return top.time;
		}
		for (int i = 0; i < 4; ++i)
		{
			int newx = top.x + go[i][0];
			int newy = top.y + go[i][1];
			if (test(newx, newy))
			{
				Node.x = newx;
				Node.y = newy;
				Node.time = top.time + 1;
				q.push(Node);
				vis[newx][newy] = true;
			}
		}
	}
	return -1;

}


int main()
{
	cin >> n >> m;

}
