#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAXN = 110;


int father[MAXN];


void init()
{
	for (int i = 0; i < MAXN; ++i)
	{
		father[i] = i;
	}
}

int findFather(int v)
{
	if (v == father(v))
		return v;
	else
	{
		int F = findFather(father[v]);
		father[v] = F;
		return F;
	}
}

void Union(int a,int b)
{
	int faA = findFather(a);
	int fab = findFather(b);
	if (faA!=fab)
		father[b] = a;
}
s