//Ignorati al patrulea parametru de la blacklistObj si cout-urile. Nu am apucat sa le sterg.


#include <iostream>
using namespace std;
int mat[1000][1000], obiecte[100], n, m;
void blacklistObj(int i, int j, int c, int a) {
	for (int k = 0; k < a*5; k++)
		cout << " ";
	cout << "Se verifica pozitia i" << i << " j" << j << " pentru culoarea "<< c << endl;
	for (int k = 0; k < a*5; k++)
		cout << " ";
	cout << "    ";
	if (0 > i || n <= i || 0 > j || m <= j) {
		cout << "Esuat - out of bounds" << endl;
		return;
	}
	if (mat[i][j] != c) {
		cout << "Esuat - c" << endl;
		return;
	}
	cout << "Corect" << endl;
	mat[i][j] = 0;
	a++;
	blacklistObj(i, j - 1, c, a);
	blacklistObj(i, j + 1, c, a);
	blacklistObj(i - 1, j, c, a);
	blacklistObj(i + 1, j, c, a);
}
int main43279() {
	int i, j, suma = 0;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin>>mat[i][j];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++) {
			if(mat[i][j]){
				obiecte[mat[i][j]]++;
				blacklistObj(i, j, mat[i][j], 0);
				cout << "Obiect eliminat" << endl;
			}
		}
	cout << "--------------------------------------------------" << endl;
	i = 0;
	while (obiecte[++i] != 0) {
		suma += obiecte[i];
		cout << "culoarea " << i << " nr.obiecte:" << obiecte[i] << endl;
	}
	cout << "nr.obiecte distincte=" << suma << endl;
	cout << "nr.culori=" << i;
	return 0;
}