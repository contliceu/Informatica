//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_06.pdf
#include <iostream>
using namespace std;

void numar(int n, int c, int& m) {
	int prod{ 1 };
	m = 0;
	while (n > 0) {
		if (n % 10 != 0 && n % 10 != c) {
			m += prod * (n % 10);
			prod *= 10;
		}
		n /= 10;
	}
}
int mainschimba7() {
	int n{ 50752 }, c{ 5 }, m;
	numar(n, c, m);
	cout << m;
	return 0;
}