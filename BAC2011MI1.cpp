#include <iostream>
using namespace std;

int inter(int na, int nb, int a[100], int b[100]) {
	int nr = 0;
	for (int i = 0; i < na; i++)
		for (int j = 0; j < nb; j++)
			if (a[i] == b[j])
				nr++;
	return nr;
}
int C2(int a, int b)
{
	if (b == 0) return a;
	else return C2(b, a % b);
}
int main8674356() {
	int na = 3, nb = 3, a[100]{ 5, 4, 8 }, b[100]{ 6, 8, 5 };
	cout << C2(6, 3);
	return 0;
}