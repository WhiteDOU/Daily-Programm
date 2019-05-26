#include <cstdio>
#include <iostream>

using namespace std;


int count1 = 0;
int n;
int p[4];
bool hash2[123];

void genP(int index)
{

	if (index == n + 1)
	{
		bool flag = true;
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (abs(i - j) == abs(p[i] - p[j]))
					flag = false;
			}
		}
		if (flag)
			count1++;
		return;
	}
	for (int x = 1; x <= n; ++x)
	{
		if (hash2[x] == false)
		{
			p[index] = x;
			hash2[x] = true;
			genP(index + 1);
			hash2[x] = false;
		}
	}

}
