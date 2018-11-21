// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;

    while (j < m) {
        if (i > n - 1)
            break;
        if (a[i] <= b[j]) {
            i++;
            j++;
        }
        else
            j++;
    }

    cout << n - i << endl;
    return 0;
}