#include <iostream>
using namespace std;

// C

void inserare(int &n, int (&a)[1000]) {
	int i, j;
	for (i = 0; i < n; i++) { 
		if (!(a[i] % 2)) {
			for (j = n++; j > i+1; j--) {
				a[j] = a[j - 1];
			}
			a[j] = 2011;
		}
	}
}
int main765() {
	int n = 8, a[1000]{ 1,2, 2, 7, 1, 65, 3, 4 };
	bool nF = 0;
	inserare(n, a);
	cout << "n = " << n << endl << "a = { ";
	for (int i = 0; i < n; i++) {
		if (nF)
			cout << ", " << a[i];
		else {
			nF = 1;
			cout << a[i];
		}
	}
	cout << " }";
	return 0;
}