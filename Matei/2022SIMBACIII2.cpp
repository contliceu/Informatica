#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char t[250], *cuv, *x;
    cin.getline(t,250);
    x = strtok(t, "; ");
    cuv = x;
    do{
        if(!strcmp(cuv,x)){
            cuv = strtok(NULL, "; ");
            cout<<cuv<<" ";
        }
        cuv = strtok(NULL, " ");
    }while(cuv);
}
