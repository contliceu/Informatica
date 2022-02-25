#include <iostream>
using namespace std;

int mainschimb17(int n){
    int s{};
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
