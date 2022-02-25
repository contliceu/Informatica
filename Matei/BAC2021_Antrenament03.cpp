//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_03.pdf
#include <iostream>
using namespace std;

int prim(int n) {
	int i{2};
	if (n == 1)
		return 0;
	while (i <= n/2) {
		if (n % i++ == 0)
			return n;
	}
	return 0;
}
int suma(int n) {
	int rez{ n + 1 };
	for (int i = 4; i <= n / 2; i++)
		rez += prim(i);
	return rez;
}
int mainschimba10() {
	cout << suma(12);
	return 0;
}