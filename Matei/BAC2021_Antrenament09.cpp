//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_09.pdf
#include <iostream>
using namespace std;

void divizori(int a, int b, int k, int& nr) {
	int initial{ a / k };
	nr = 0;
	if (a % k != 0)
		initial++;
	while (initial * k <= b) {
		if (initial * k % 10 == k)
			nr++;
		initial++;
	}
}
int mainschimba5() {
	int a{ 3 }, b{ 50 }, k{4}, nr;
	divizori(a, b, k, nr);
	cout << nr;
	return 0;
}