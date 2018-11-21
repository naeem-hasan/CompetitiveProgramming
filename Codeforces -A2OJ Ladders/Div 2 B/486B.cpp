// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;

    int b[m][n];
    int a[m][n];
    int c[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> b[i][j];
            a[i][j] = 1;
            c[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (b[i][j] == 0){
                for (int x = 0; x < m; x++)
                    a[x][j] = 0;
                for (int x = 0; x < n; x++)
                    a[i][x] = 0;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j]) {
                for (int x = 0; x < m; x++)
                    c[x][j] = 1;
                for (int x = 0; x < n; x++)
                    c[i][x] = 1;
            }
        }
    }

    bool flag = true;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i][j] != b[i][j]) {
                flag = false;
                break;
            }
        }
    }

    if (flag){
        cout << "YES" << endl;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout << a[i][j];
                if (j < n - 1) cout << " ";
            }
            cout << endl;
        }
    } else cout << "NO" << endl;

    return 0;
}