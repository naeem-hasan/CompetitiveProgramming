// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int dirty[m];

    for (int i = 0; i < m; i++) {
        cin >> dirty[i];
    }

    sort(dirty, dirty + m);

    if (dirty[0] == 1 || dirty[m - 1] == n) {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    int c = 1;

    for (int i = 1; i < m; i++) {
        if (dirty[i] == dirty[i - 1] + 1)
            c++;
        else
            c = 1;
        if (c > 2) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;

    return 0;
}