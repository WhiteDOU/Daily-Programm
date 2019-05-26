#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
const int maxn = 100010;
struct Bign{
	int d[1000];
	int len;
	Bign()
	{
		memset(d,0, sizeof(d));
		len = 0;
	}
};

Bign change(char str[])
{
	Bign a;
	a.len = strlen(str);

	for (int i = 0; i < a.len; ++i)
	{
		a.d[i] = str[a.len-i-1]-'0';
	}
	return a;
}