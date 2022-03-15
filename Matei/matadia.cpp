#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream in("inmat.txt");
    int n,gsum,gmax = -1,g,mxn,izn = 0,i;
    bool eulerian = 1;
    in>>n;
    int v[n][n],mx[n]{},iz[n]{};
    for(i = 0; i < n; i++){
        g = 0;
        for(int j = 0; j < n; j++){
            in>>v[i][j];
            if((i>j && v[i][j] != v[j][i]) || (v[i][j] != 0 && v[i][j] != 1) || (i == j && v[i][j] !=0)){
                cout<<"Nu e";
                return 0;
            }
            g += v[i][j];
        }
        gsum += g;
        if(!g)
            iz[izn++] = i;
        else{
            if(eulerian)
                eulerian = !(g%2);
            if(g > gmax){
                gmax = g;
                mx[0] = i;
                mxn = 1;
            }else if(g == gmax)
                mx[mxn++] = i;
        }

    }
    cout<<"Noduri cu grad maxim: ";
    for(i = 0; i <mxn; i++)
        cout<<(i ? ", ": "")<<mx[i]+1;
    cout<<"\nNoduri izolate: ";
    for(i = 0; i <izn; i++)
        cout<<(i ? ", ": "")<<iz[i]+1;
    cout<<"\nNumar muchii: "<<gsum/2;
    cout<<"\nEulerian: "<<(eulerian ? "Da" : "Nu");
}
