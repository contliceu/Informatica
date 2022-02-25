#include <iostream>
using namespace std;

int numCifre(int n)
{
    int s{};
    while (n > 0)
    {
        s++;
        n /= 10;
    }
    return s;
}
