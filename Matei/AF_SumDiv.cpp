#include <iostream>
using namespace std;

int sumDiv(int n)
{
    int d, s;
    if (n == 1)
        s = 1;
    else
        s = n + 1;
    for (d = 2; d * d < n; d++)
        if (n % d == 0)
            s += d + n / d;
    if (d * d == n)
        s += d;
    return s;
}
