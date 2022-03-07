/*#include <iostream>
#include <string>
using namespace std;
//div primi
void recDivPrim(int n, int i, string &out){
	bool prim = 1;
	if (n % i == 0) {
		if (i > 2)
			out += ", " + to_string(i);
		else
			out += to_string(i);
		if (prim)
			prim = 0;
	}
	while (n % i == 0)
		n /= i;
	if (++i == n && prim)
		out += "prim";
	else if(n != 1)
		recDivPrim(n, i, out);
}
string divPrim(int n) {
	string out = "Raspunul: ";
	recDivPrim(n, 2, out);
	return out;
}

//cmmd
int recCMMD(int n, int i) {
	if (n % i == 0)
		return n / i;
	else
		return recCMMD(n, i + 1);
}

int main534() {
	cout<<divPrim(13);
	//cout << recCMMD(12,2);
	return 0;
}*/