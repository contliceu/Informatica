#include <iostream>


using namespace std;

int st[4], n = 3;

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

//modif aici
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

//modif aici
void tipar()
{
    for (int i = 1; i <= n; i++) {
        switch (st[i]) {
        case 1:
            cout << "Rosu ";
            break;
        case 2:
            cout << "Verde ";
            break;
        case 3:
            cout << "Galben ";
            break;
        case 4:
            cout << "Albastru ";
            break;
        case 5:
            cout << "Violet ";
            break;
        default:
            cout << "Code brok: "<< st[i];
        }
    }
    printf_s("\n");
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

int main()
{
    bt(1);
    cin.ignore(256, '\n');
    return 0;
}