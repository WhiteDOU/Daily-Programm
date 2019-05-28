#include <iostream>
#include <string>
#include <map>


using namespace std;


const int MAXN = 2010;
const int INF = 100000000;
map<int, string> intToString;
map<string, int> stringToInt;
map<string, int> Gang;


int graph[MAXN][MAXN] = {0}, weight[MAXN] = {0};

int n, k, numPerson = 0;

bool vis[MAXN] = {false};


void dfs(int now, int &head, int &numMember, int &total)
{
	numMember++;
	vis[now] = true;
	if (weight[now] > weight[head])
	{
		head = now;
	}

	for (int i = 0; i < numPerson; ++i)
	{
		if (graph[now][i] > 0)
		{
			total += graph[now][i];
			graph[now][i] = graph[i][now] = 0;
			if (vis[i] == false)
				dfs(i, head, numMember, total);
		}
	}
}


void dfsTrave()
{
	for (int i = 0; i < numPerson; ++i)
	{
		if(vis[i] == false)
		{
			int head = i,numMember = 0,totalValue = 0;
			dfs(i,head,numMember,totalValue);
			if (numMember > 2 && totalValue > k)
			{
				Gang[intToString[head]] = numMember;
			}
		}
	}
}

