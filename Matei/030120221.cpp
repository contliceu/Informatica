//https://classroom.google.com/u/1/c/MTU4OTE2ODA1ODU2/a/NDQzOTU0OTE3ODk1/details 12
#include <fstream>
using namespace std;

int main645645() {
	char c1,c2 = 0;
	ifstream in("poezie.in");
	ofstream out("poezie.out");
	while (in.get(c1)) {
		if (c2 != 0) {
			if (c2 == '.' || c2 == ',' || c2 == '!' || c2 == '?') {
				if (c1 == '\n')
					out << c2;
			}
			else
				out << c2;
		}
		c2 = c1;
	}

	out << c2;
	return 0;
}