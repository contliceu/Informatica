//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_11.pdf
#include <iostream>
using namespace std;

int scoatePar(int x, bool oglindire) {
	int aux = x,prod = 1;
	x = 0;
	while (aux > 0) {
	if(aux % 10 % 2 == 1 ){
		if (oglindire)
			x = aux % 10 + x * 10;
		else {
			x += (aux % 10 * prod);
			prod *= 10;
		}
	}
		aux /= 10;
	}
	return x;
}
void imog(int x, int y, bool &rez) {
	rez = 0;
	if (scoatePar(x, 1) == scoatePar(y, 0))
		rez = 1;
}
int mainschimba4() {
	int x = 532,y = 84356;
	bool rez;
	imog(x, y, rez);
	cout << rez;
	return 0;
}