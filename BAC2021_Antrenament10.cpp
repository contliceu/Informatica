//https://www.pbinfo.ro/resurse/9dc152/examene/2021/antrenament/E_d_Informatica_2021_sp_MI_C_Test_10.pdf
#include <iostream>
using namespace std;

int sDivizori(int n)
{
    int d, s;
    if (n == 1)
        s = 1;
    else
        s = n + 1;
    for (d = 2; d * d < n; d++)
        if (n % d == 0)
            s = s + d + n / d;
    if (d * d == n)
        s = s + d;
    return s;
}
bool armonie(int x, int y) {
    return sDivizori(x) < x + y && sDivizori(y) > x + y;
}
int mainschimba15() {
    cout << armonie(8, 12);
    return 0;
}