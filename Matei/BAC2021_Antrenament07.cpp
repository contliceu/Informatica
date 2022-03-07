//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_07.pdf
#include <iostream>
using namespace std;

void afisare(int x, int y, int k) {
	while(0 < y-x/k && x <= y) {
		for (int j = 0; j < k && x <= y; j++) {
			cout << x << " ";
			x++;
		}
		cout <<" * ";
	}
}
int mainschimba6() {
	afisare(11,21,4);
	return 0;
}