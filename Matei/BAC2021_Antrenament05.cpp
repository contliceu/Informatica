//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_05.pdf
#include <iostream>
using namespace std;

bool indentice(int n) {
	int prod = 1;
	bool nFirst = 0;
	while (n > 0) {
		if (n / prod % 10 != n * 10 / prod % 10 && nFirst)
			return 0;
		prod *= 10;
		n /= 10;
		nFirst = 1;
	}
	return 1;
}
int mainschimba8() {
	cout << indentice(22722);
	return 0;
}