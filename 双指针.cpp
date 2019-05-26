#include <iostream>
#include <algorithm>

using namespace std;
int a[100];
int m;
typedef long long ll;
void func(int i,int j)
{
	while (i < j)
	{
		if (a[i]+a[j] == m)
		{
			cout << i << j;
			i++;
			
			j--;
		}
		else if (a[i]+a[j] < m)
		{
			i++;
		}
		else
			j--;
	}
}
int main()
{
	//cout << binaryPow(2, 6, 100000);
}