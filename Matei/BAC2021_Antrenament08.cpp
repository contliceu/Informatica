//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_08.pdf
#include <iostream>
using namespace std;

int factPrimi(int n) {
	int div{2}, nr{};
	while (n > 1) {
		if (n % div == 0)
			nr++;
		while (n % div == 0) 
			n /= div;
		div++;
	}
	return nr;
}
void nrfp(int n, int& m) {
	int i{ 2 }, factI, maxFact = -1;
	m = -1;
	while (i <= n) {
		factI = factPrimi(i);
		if (factI > maxFact || (i > m && maxFact == factI)) {
			maxFact = factI;
				m = i;
		}
		i++;
	}
}
int mainschimba14() {
	int m;
	nrfp(100, m);
	cout << m;
	return 0;
}