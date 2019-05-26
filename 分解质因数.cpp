#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
const int maxn = 100010;

bool is_prime(int n)
{
	if (n == 1)
		return false;
	int sqt = (int) sqrt(1.0 * n);
	for (int i = 2; i <= sqt; ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int prime[maxn], pNum = 0;

void find_preme()
{
	for (int i = 1; i < maxn; ++i)
	{
		if (is_prime(i) == true)
			prime[pNum++] = i;
	}
}

struct fractor
{
	int x,
	int cnt;
} fac[10];

int main()
{
	find_preme();
	int n, num = 0;
	cin >> n;
	if (n == 1)
		cout << endl;
	else
	{
		cout << n;
		int sqr = int(sqrt(1.0 * n));

		for (int i = 0; i < pNum && prime[i] < sqr; ++i)
		{
			if (n % prime[i] == 0)
			{

				fac[num].x = prime[i];
				fac[num].cnt = 0;
				while (n % prime[i] == 0)
				{
					fac[num].cnt++;
					n /= prime[i];
				}
				num++;
			}
			if (n == 1)
				break;
		}
		if (n != 1)
		{
			fac[num].x = n;
			fac[num++].cnt = 1;
			
		}
	}
}