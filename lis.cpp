#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;


const int N = 100;
int a[N], dp[N];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}

	int ans = -1;
	for (int i = 1; i <= n; ++i)
	{
		dp[1] = 1;
		for (int j = 1; j < i; ++j)
		{
			if (a[i] >= a[j] && (dp[j] + 1 > dp[i]))
				dp[i] = dp[j] + 1;
		}
		ans = max(ans,dp[i]);
	}
	cout << ans;
}