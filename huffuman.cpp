#include <cstdio>
#include <queue>
#include <vector>


#include <iostream>

using namespace std;

priority_queue<long long, vector<long long>, greater<long long> > q;

typedef long long ll;

int main()
{
	int n;
	ll temp, x, y, ans = 0;

	cin >> n;
	for (int i = 0; i <; ++i)
	{
		cin >> temp;
		q.push(temp);
	}

	while (q.size() > 1)
	{

		x = q.top();
		q.pop();
		y = q.top();
		q.pop();
		q.push(x + y);
		ans += x + y;
	}
	cout << ans;
	return 0;
}