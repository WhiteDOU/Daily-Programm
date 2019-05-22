#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


struct Mooncakeee
{
	double store;
	double sell;
	double price;

	bool operator<(const Mooncakeee &b) const
	{
		return price > b.price;
	}
} cake[100];


int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	double d;
	cin >> n >> d;
	for (int i = 0; i < n; ++i)
	{
		cin >> cake[i].store;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> cake[i].sell;
		cake[i].price = cake[i].sell / cake[i].store;
	}
	sort(cake, cake + n);

	double ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (cake[i].store <=d)
		{
			d-=cake[i].store;
			ans +=cake[i].sell;
		} else{
			ans +=cake[i].price*d;
			break;
		}
	}
	cout << ans;
}