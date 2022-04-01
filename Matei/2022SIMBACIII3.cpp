#include <iostream>
#include <fstream>
using namespace std;
long long int put(int p, int n){
    if(p == 0)
        return 1;
    return put(p-1, n)*n;
}
long long int fact(long long int n){
    if(n == 1)
        return 1;
    return fact(n-1)*n;
}
int main(){
    ofstream out("bac.txt");
    int r;
    long long int n, p = 9;
    cin>>n;
    n = fact(n);
    for(int i = 1; p <= n;i++){
        p = put(i,45);
        if(n%p == 0)
            r = i;
    }
    out<<r;
}
