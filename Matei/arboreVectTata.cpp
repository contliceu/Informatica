#include <fstream>
#include <iostream>
using namespace std;

int main(){
    int n,i,mx = 0, nrMx = 0, parinte;
    ifstream in("vectTata.txt");
    in>>n;
    int vD[n+1]{}, vM[n]{};
    for(i = 1; i <=n; i++){
        in>>parinte;
        vD[parinte]++;
    }
    cout<<"Frunze:";
    for(i = 1; i <= n; i++){
        if(vD[i] == 0)
            cout<<' '<<i;
        if(vD[i] > mx){
            mx = vD[i];
            nrMx = 0;
        }
        if(vD[i] == mx)
            vM[nrMx++] = i;
    }
    cout<<"\nMax("<<mx<<"):";
    for(i = 0; i < mx; i++)
        cout<<' '<<vM[i];
    return 0;
}
