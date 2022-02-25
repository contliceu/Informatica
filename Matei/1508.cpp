#include <iostream>
using namespace std;

int nr_sa(int a[100][100], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int maxJ = -1;
        int minJ = -1;
        for (int j = 0; j < m; j++) {
            if (maxJ < a[i][j])
                maxJ = a[i][j];
            if (minJ > a[i][j] || minJ == -1)
                minJ = a[i][j];
        }
        for (int k = 0; k < m; k++) {
            if (a[i][k] != minJ && a[i][k] != maxJ)
                continue;
            int maxI = -1;
            int minI = -1;
            for (int l = 0; l < n; l++) {
                if (maxI < a[l][k])
                    maxI = a[l][k];
                if (minI > a[l][k] || minI == -1)
                    minI = a[l][k];
            }
            if((a[i][k] == minJ && a[i][k] == maxI) || (a[i][k] == maxJ && a[i][k] == minI))
                count++;
        }
    }
    return count;
}
int mainschimba1() {
    int n = 2, m = 6;
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cout << nr_sa(a, n, m);
    return 0;
}
