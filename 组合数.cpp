#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


typedef long long ll;

ll res[67][67] = {0};
ll c(ll n, ll m)
{
	if (m == 0 || m == n)
		return 1;
	if (res[n][m]!=0)
		return res[n][m];
	res[n][m]= c(n-1,m)+c(n-1.m-1);
	return res[n][m];
}