//```cpp
#include <iostream>
using namespace std;
float mv(int n, int v[100]) {
	float sum = 0, div = 0;
	for (int i = 0; i < n; i++) 
		if (v[i] % 2 && v[i] < 100 && v[i] > 9) {
			sum += v[i];
			div++;
		}
	return sum / div;
}
void Sa(int x, int y, int &rez) {
	rez = 0;
	int aux = 1;
	bool check = 1;
	while (x > 0) {
		if (x % 10 == y) {
			rez += 9 * aux;
			if (check)
				check = 0;
		}else
			rez += x % 10 * aux;
		aux *= 10;
		x /= 10;
	}
	if (check)
		rez = -1;
}
int main9086634() {
	int rez , n = 6, v[100]{ 200,17,16,21,11,7 };
	//cin >> n >> p;
	cout << mv(n, v) << endl;;
	Sa(6554645, 6, rez);
	cout << rez;
	return 0;
}
//```