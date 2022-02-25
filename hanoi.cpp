#include <iostream>
using namespace std;

/*void hanoi(int n, char a, char b, char c) {
	for (int i = 1; i <= n - 1; i++) {
		cout << a << " -> " << b << endl;
	}
	cout << a << " -> " << c << endl;
	if(n > 1)

}
void hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		cout << a << " -> " << c << endl;
		return;
	}
		hanoi(n - 1, a, c, b);
		cout << a << " -> " << c << endl;
		hanoi(n - 1, b, a, c);
}
void quickSort(int ar1[], int a, int b) {
	for (int i = a; i < b; i++) {
		if()
	}
}*/
void interc(int a, int b, int m, int ar[]) {
	int ar1[100], i = a, k, j = m+1;
	for (k = 0; i <= m && j <= b;)
		ar[i] > ar[j] ? ar1[k++] = ar[j++] : ar1[k++] = ar[i++];
	
	while (i <= m) {
		ar1[k++] = ar[i++];
	}
	while (j <= b) {
		ar1[k++] = ar[j++];
	}

	for (i = a; i <= b; i++, k++)
		ar[i] = ar1[k];
}
void divImp(int ar[], int a, int b) {
	if (b - a <= 1) {
		if (ar[b] < ar[a])
			swap(ar[b], ar[a]);
		cout<<" "<< ar[a] << " " << ar[b];
		return;
	}
	int m = (a + b) / 2;
	divImp(ar, a, m);
	divImp(ar, m + 1, b);
	interc(a,b,m,ar);
}
int main9753() {
	int ar[6] = { 3,4,2,8,5,4 };
	divImp(ar, 0, 5);
	for (int i = 0; i < 6; i++)
		cout << ar[i];
	return 0;
}