#include <iostream>
using namespace std;

/*int x = 3, y = 4;

void fi(int a, int& b) {
    short int z = 7;
    b = b + z;
    a = b + z * a;
    cout << a << " " << b << endl;
}
int main() {
    int x = 1, y = 2;
    fi(y, x);
    cout << x << " " << y;
    return 0;
}

void dmax(int x, int& d) {
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0)
                d = x / i;
}

int main() {
    int d = 0;
    dmax(1, d);
    cout << d;
}

void f(int x) {
    if (x <= 10) cout << 0 << " ";
    else {
        cout << 1 << " ";
        f(x - 2);
        cout << x << " ";
    }
}*/

int f(int a, int b) {
    if (b < 1) return -1;
    else if (a % b == 0)
        return 1 + f(a / b, b);
    else
        return 0;
}
int main8670o87234() {
    cout<<f(108,3);
    return 0;
}