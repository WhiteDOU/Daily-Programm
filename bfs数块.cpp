#include <iostream>
#include <queue>

using namespace std;

const int maxn = 100;

struct node
{
	int x, y;

} Node;

int n, m;
int matrix[maxn][maxn];
bool inq[maxn][maxn] = {false};
int go[][2] = {
		0, 1,
		0, -1,
		1, 0,
		-1, 0
};

bool judge(int x, int y)
{
	if (x >= n || x < 0 || y >= m || y < 0)
		return false;
	if (matrix[x][y] == 0 || inq[x][y] == true)
		return false;
	return true;


}

void bfs(int x, int y)
{
	queue<node> Q;
	Node.x = x;
	Node.y = y;
	Q.push(Node);
	inq[x][y] = true;
	while (!Q.empty())
	{
		node top = Q.front();
		for (int i = 0; i < 4; ++i)
		{
			int newX = x + go[i][0];
			int newY = y + go[i][1];
			if (judge(newX, newY))
			{
				Node.x = newX;
				Node.y = newY;
				Q.push(Node);
				inq[newX][newY] = true;
			}
		}

	}
}

int main()
{
	cin >> n >> m;
	for (int x = 0; x < n; ++x)
	{
		for (int y = 0; y < m; ++y)
		{
			cin >> matrix[x][y];
		}
	}

	int ans = 0;
	for (int x = 0; x < n; ++x)
	{
		for (int y = 0; y < m; ++y)
		{
			if (matrix[x][y] == 1 && inq[x][y] == false)
			{
				ans++;
				bfs(x, y);
			}
		}
	}
	cout << ans;
}