#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a,int b)
{
	if ( b == 0)
		return a;
	return gcd(b, a % b);

}

struct Fraction
{
	int up,down;
};

Fraction reduction(Fraction result)
{
	if (result.down < 0)
	{
		result.up = -result.up;
		result.down = - result.down
	}
	if (result.up == 0)
		result.down = 1;
	else
	{
		int d = gcd(abs(result.up),abs(result.down));
		result.up /= d;
		result.down /= d;

	}
	return result;
}
int main()
{
   cout << gcd(12,4);
}