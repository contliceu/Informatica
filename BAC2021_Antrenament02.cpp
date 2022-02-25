//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_02.pdf
#include <iostream>
using namespace std;

int factori(int n, int m) {
	int rez{};
	for (int div = 2; n > 1 && m > 1; div++) {
		int putN{}, putM{};
		while (n % div == 0) {
			n /= div;
			putN++;
		}
		while (m % div == 0) {
			m /= div;
			putM++;
		}
		if (putM == putN && putN > 0)
			rez++;
	}
	return rez;
}
int mainschimba11() {
	cout << factori(16500, 10780);
	return 0;
}