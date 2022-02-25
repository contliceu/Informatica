#include <iostream>


using namespace std;

int st[10], n;

void init(int k)
{
    st[k] = 0;
}

int succesor(int k)
{
    if (st[k] < n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}

//modif aici
//de facut
int valid(int k)
{
    if (k > 1)
        if (abs(st[k - 1] - st[k]) <= 1)
            return 0;
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
        for (int j = 1; j <= n; j++) {
            if (j == st[i])
                cout << '*';
            else
                cout << '-';
            cout << ' ';
        }
        cout << '\n';
    }
    cout << endl;
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
    cin >> n;
    bt(1);
    return 0;
}