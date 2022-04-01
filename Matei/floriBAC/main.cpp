#include <iostream>

using namespace std;

int main()
{
    char a[3][15];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 15; j++)
            cin>>a[i][j];
        for(int j = 0; j < 13; j++)
            if(a[1][j] == a[0][j+1] && a[1][j] == a[2][j+1] && a[1][j] == a[1][j+2]){
                cout<<2<<' '<<j+2<<"  ";
            }
    return 0;
}
