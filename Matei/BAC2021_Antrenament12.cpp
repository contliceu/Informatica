//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_12.pdf
#include <iostream>
using namespace std;

void frate(int x, int& y) {
	y = 0;
	int put = 1;
	while (x > 0) {
		int aux = x,cifre = 0;
		while (aux > 0) {
			cifre++;
			aux /= 10;
		}
		y = y*10 + x%10*10;
		put *= 10;
		x /= 10;
	}
}
int mainschimba3() {
	int x = 2138, y;
	frate(x,y);
	cout << y;
	return 0;
}