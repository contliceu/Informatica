#include <iostream>
using namespace std;

int SumCif(int n)
{
    int s{};
    while (n > 0){
        s += n % 10;
        n /= 10;
    }
    return s;
}
