//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_04.pdf
#include <iostream>
using namespace std;

int joc(int n) {
	int nr{ 1 };
	for (int div = 2; div <= n/2; div++) 
		if (n % div == 0) 
			nr++;
	return nr;
}
int mainschimba9() {
	cout << joc(12);
	return 0;
}