#include <iostream>


using namespace std;

int litere[100];

void init(int k)
{
    st[k] = 0;
}

int succesor(int k)
{
    if (st[k] < 5)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

int valid(int k)
{
    if (k == 2 && st[k] != 3)
        return 0;
    for (int i = 0; i < k; i++) {
        if (st[i] == st[k])
            return 0;
    }
    return 1;
}

int solutie(int k)
{
    return k == n;
}

void tipar()
{

}
void bt(int k)
{
    init(k);
    while (succesor(k))
        if (valid(k))
            if (solutie(k))
                tipar();
            else
                bt(k + 1);

}

int mainhgfhgf()
{
    int n;
    char cuv[n+1];
    cin>>n>>cuv;
    for(int i = 0; i < n; i++){
        if(strchr(litere,))
    }
    bt();
    cin.ignore(256, '\n');
    return 0;
}
int main(){
}
