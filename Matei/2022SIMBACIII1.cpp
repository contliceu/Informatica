#include <iostream>
using namespace std;
int cmmmc(int x, int y){
    int r;

    while(y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
void rest(int x, int y, int , int &k){

}
int main(){
    cout<<cmmmc(10,15);
}
