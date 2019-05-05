#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

long long F(int num)
{
	if (num == 1)
		return 2;
	else
		return 3 * F(num - 1) + 2;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << F(n);
	}
}