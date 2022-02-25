#include <iostream>
using namespace std;

void inserare1(int n, float m[50][50]) {
	float ma[50];
	int i, j;
	for (j = 0; j < n; j++) {
		ma[j] = 0;
		for (i = 0; i < n; i++)
			ma[j] += m[i][j];
		ma[j] /= n;
	}
	for (i = 0; i < n/2; i++) {
		for (j = 0; j < n; j++)
			cout << m[i][j]<<" ";
		cout << endl;
	}
	for (i = 0; i < n; i++)
		cout << ma[i]<<" ";
	cout << endl;
	for (i = n / 2; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}
int mainschimba18() {
	int n;
	cin >> n;
	float m[50][50];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> m[i][j];
	cout << endl;
	inserare1(n,m);
	return 0;
}