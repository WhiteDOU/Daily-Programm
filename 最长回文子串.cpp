#include <iostream>
#include <cstring>

const int MAXN = 10101;
using namespace std;

string s;

int dp[MAXN][MAXN];


int main()
{
	ios::sync_with_stdio(false);

	cin >> s;
	int len = s.size();
	int ans = 1;
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < len; ++i)
	{
		dp[i][i] = 1;
		if (i < len - 1)
		{
			if (s[i] == s[i + 1])
			{
				dp[i][i + 1] = 1;
				ans = 2;
			}
		}
	}
	for (int l = 3; l <= len; ++l)
	{
		for (int i = 0; i + l - 1 < len; ++i)
		{
			int j = i + l - 1;

			if (s[i] == s[j] && s[i + 1][j - 1] == 1)
			{
				dp[i][j] = 1;
				ans = l;
			}
		}
	}
	cout <<ans;
}