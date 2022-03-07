//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_01.pdf
#include <iostream>
using namespace std;

void divX(int n, int x) {
	for (int i = n; i > 0; i--)
		cout << i * x << " ";
}
int mainschimba12() {
	divX(4, 15);
	return 0;
}