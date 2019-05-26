#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll binaryPow(ll a, ll b, ll m)
{
	if (b == 0)
		return 1;
	if (b % 2 == 1)
		return a * binaryPow(a, b - 1, m) % m;
	else
	{
		ll mul = binaryPow(a, b / 2, m);
		return mul * mul % m;
	}
}

ll binaryPow(ll a, ll b, ll m)
{
	ll ans = 1;
	while (b > 0)
	{
		if (b & 1)
		{
			ans = ans * a % m;
		}
		a = a* a % m;
		b >>= 1;
	}
	return ans;
}

int main()
{
	cout << binaryPow(2, 6, 100000);
}