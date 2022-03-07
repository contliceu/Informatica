#include <stdio.h>


using namespace std;

int st[20], n, m[20][20];
char* cul[4];

void init(int k){
    st[k] = -1;
}

int succesor(int k){
    if (st[k] < 3)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid(int k){
    for (int i = 0; i < k; i++) {
        if ((st[k] == st[i]) && m[k][i])
            return 0;
    }
    return 1;
}

int solutie(int k){
    return k == (n-1);
}

void tipar(){
    printf_s("\n\n");
    for (int i = 0; i < n; i++)
        printf_s("%i - %s\n", i+1, cul[st[i]]);
}
void bt(int k){
    init(k);
    while (succesor(k))
        if (valid(k))
            if (solutie(k))
                tipar();
            else
                bt(k + 1);

}

int main(){
    int i, j;
    n = 0;
    printf_s("Culori: ");
    for(i = 0; i < 4; i++){
        cul[i] = new char[30];
        scanf_s("%s", cul[i], 29);
    }
    while (n <= 0 || n > 20) {
        printf_s("Nr tari: ");
        scanf_s("%i", &n);
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf_s("%i", &m[i][j]);
    bt(1);
    return 0;
}