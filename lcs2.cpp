#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 100;
char a[N],b[N];
int dp[N][N];

int main()
{
	int n;
	gets(a+1);
	gets(b+1);
	int lenA = strlen(a+1);
	int lenB = strlen(b+1);
	for (int i = 0; i <= lenA; ++i)
	{
		dp[i][0] = 0;
	}
	for (int j = 0; j <= lenB ; ++j)
	{
		dp[0][j] = 0;
	}

	for (int i = 1; i <= lenA ; ++i)
	{
		for (int j = 1; j <= lenB ; ++j)
		{
			if (a[i] == b[j])
				dp[i][j]=dp[i-1][j-1] + 1;
			else
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout << dp[lenA][lenB];
}