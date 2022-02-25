#include <iostream>
using namespace std;

int cifraMin(int n)
{
	int cmin{ -1 };
	while (n > 0)
	{
		if (cmin > n % 10 || cmin == -1)
			cmin = n % 10;
		n = n / 10;
	}
	return cmin;
}