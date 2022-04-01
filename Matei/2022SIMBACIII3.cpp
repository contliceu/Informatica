#include <iostream>
#include <fstream>
using namespace std;

long long int fact(long long int n){
    if(n == 1)
        return 1;
    return fact(n-1)*n;
}
int main(){
    ofstream out("bac.txt");
    int r;
    long long int n, p = 45;
    cin>>n;
    n = fact(n);
    for(int i = 1; p <= n;i++){
        if(n%p == 0)
            r = i;
        p*=45;
    }
    cout<<r;
}
