#include <iostream>
using namespace std;
//citire matrice recursiva
int maxim(int v[1000], int inceput, int limita) {
	if (inceput == limita)
		return v[inceput];
	else {
		int m = (inceput + limita) / 2;
		int m1 = maxim(v, inceput, m);
		int m2 = maxim(v, m + 1, limita);
		int raspuns = m1 > m2 ? m1 : m2;
		return raspuns;
	}

}
void afis(int v[1000], int inceput, int limita) {
	if (inceput == limita)
		cout << v[inceput] << " ";
	else {
		int m = (inceput + limita) / 2;
		afis(v, inceput, m);
		afis(v, m + 1, limita);
	}
}
void cit(int v[1000], int inceput, int limita) {
	if (inceput == limita)
		cin >> v[inceput];
	else {
		int m = (inceput + limita) / 2;
		cit(v, inceput, m);
		cit(v, m + 1, limita);
	}
}
void citBi(int v[100][100], int inI, int sfI, int inJ, int sfJ) {
	switch (inI == sfI ? (inJ == sfJ ? 3 : 2) : 1) {
	case 1:
		citBi(v, inI, (inI + sfI) / 2, inJ, sfJ);
		citBi(v, (inI + sfI) / 2 + 1, sfI, inJ, sfJ);
		break;
	case 2:
		citBi(v, inI, sfI, inJ, (inJ + sfJ) / 2);
		citBi(v, inI, sfI, (inJ + sfJ) / 2 + 1, sfJ);
		break;
	case 3:
		cin >> v[inI][inJ];
	}
}
void scrBi(int v[100][100], int inI, int sfI, int inJ, int sfJ) {
	switch (inI == sfI ? (inJ == sfJ ? 3 : 2) : 1) {
	case 1:
		scrBi(v, inI, (inI + sfI) / 2, inJ, sfJ);
		scrBi(v, (inI + sfI) / 2 + 1, sfI, inJ, sfJ);
		break;
	case 2:
		scrBi(v, inI, sfI, inJ, (inJ + sfJ) / 2);
		scrBi(v, inI, sfI, (inJ + sfJ) / 2 + 1, sfJ);
		break;
	case 3:
		cout << v[inI][inJ] << " ";
	}
}
int sum(int v[1000], int inceput, int limita) {
	if (inceput == limita)
		return v[inceput];
	else {
		int m = (inceput + limita) / 2;
		return sum(v, inceput, m) + sum(v, m + 1, limita);
	}

}
int cautBin(int v[1000], int inceput, int limita, int x) {
	if (x == v[inceput])
		return inceput+1;
	else {
		int m = (inceput + limita) / 2;
		if (v[m] >= x)
			return cautBin(v, inceput, m, x);
		else
			return cautBin(v, m + 1, limita, x);
	}
}
int main65478() {
	int v1[100][100], v[100]{ 1,2,3,4,5,6,7,8 }, n, m;
	cin >> n >> m;
	citBi(v1, 0, n - 1, 0, m - 1);
	scrBi(v1, 0, n - 1, 0, m - 1);
	cout << endl;
	afis(v, 0, 7);
	cout << endl;
	afis(v, 0, 7);
	cout << endl;
	cout<<sum(v, 0, 7);
	cout << endl;
	cout<<cautBin(v, 0, 7, 4);
	return 0;
}