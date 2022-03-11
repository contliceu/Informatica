#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin>>v[i][j];
            if((i>j && v[i][j] != v[j][i]) || (v[i][j] != 0 && v[i][j] != 1) || (i == j && v[i][j] !=0))
                cout<<"Nu e";
                return;
        }

}
