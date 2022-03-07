#include <iostream>
#include <string.h>
using namespace std;

int f(int n)
{
	if (n <= 0) return -1;
	if (n % 2 == 0) return 0;
	if (n % 3 == 0) return 0;
	return 1 + f(n - 10);
}
/*int main564() {
	char s[20] = "examen";
	strcpy_s(s, "1b2d3");
	s[2] = 'a'+2;
	strcpy_s(s, s + 1);
	//strcpy_s(s + 3, s + 4);
	//cout& lt; &lt; s;
	cout << s;
	return 0;
}*/