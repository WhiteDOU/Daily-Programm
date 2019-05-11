#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	char alpha;
	double t, d, h;
	int i;
	for (;;)
	{
		t = d = h = 200;
		for (int i = 0; i < 2; ++i)
		{
			cin >> alpha;
			switch (alpha)
			{
				case 'E':
					return 0;
				case 'T':
					cin >> t;
					break;
				case 'D':
					cin >> d;
					break;
				case 'H':
					cin >> h;
					break;
			}

		}
		if (h == 200)
			h=t+0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10);
		else if (t == 200)
			t=h-0.5555*(6.11*exp(5417.7530*(1/273.16-1/(d+273.16)))-10);
		else if(d == 200)
			d=1/((1/273.16)-((log((((h-t)/0.5555)+10.0)/6.11))/5417.7530))-273.16;
		printf("T %.1f D %.1f H %.1f\n",t,d,h);


	}
	return 0;
}