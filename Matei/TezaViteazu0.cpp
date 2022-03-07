#include <iostream>
using namespace std;

void afis(char s[100]) {
	bool transf = false;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == 'M')
			transf = false;
		if (transf)
			cout << (char)tolower(s[i]);
		else
			cout << s[i];
		if (s[i] == 'E')
			transf = true;		
	}
}
int main879686556() {
	char s[100] = { "aEGHFSDMHDfg" };
	afis(s);
	return 0;
}