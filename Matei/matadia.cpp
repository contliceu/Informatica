#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream in("inmat.txt");
    int n;
    in>>n;
    int v[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            in>>v[i][j];
            if((i>j && v[i][j] != v[j][i]) || (v[i][j] != 0 && v[i][j] != 1) || (i == j && v[i][j] !=0)){
                cout<<"Nu e";
                return 0;
            }
        }
    cout<<"E";
}
