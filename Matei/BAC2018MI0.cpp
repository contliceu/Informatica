#include <iostream>
using namespace std;
bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) 
			return 0;
	return 1;
}
int interval(int n) {
	int i;
	bool foundPrime = 0;
	for (i = n; true; i++) {
		if (foundPrime) {
			if (!isPrime(i))
				return i;
		}else if (isPrime(i))
				foundPrime = 1;
	}
}
int main6456() {
	/*int v1[100][100], i, j;
	for (i = 0; i < n; i++) {
		if (i % 2) {
			for (j = 0; j < n; j++)
				v1[j][i] = v0[j];
		}
		else {
			for (j = 0; j < n; j++)
				v1[n-j-1][i] = v0[j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << v1[i][j];
		cout << endl;
	}*/
	int v[100] = { 1,2,3,4 };
	cout<<interval(11);
	return 0;
}