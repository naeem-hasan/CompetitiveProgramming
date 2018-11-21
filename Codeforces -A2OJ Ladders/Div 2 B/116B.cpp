// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string grid[n];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        char x = '.';
        for (int c = 0; c < m; c++) {
            if (x == 'P' && grid[i][c] == 'W') {
                ans++;
                grid[i][c] = '.';
                grid[i][c - 1] = '.';
            }

            else if (x == 'W' && grid[i][c] == 'P') {
                ans++;
                grid[i][c] = '.';
                grid[i][c - 1] = '.';
            }
            x = grid[i][c];
        }
    }

    for (int i = 0; i < m; i++) {
        char x = '.';
        for (int c = 0; c < n; c++) {
            if (x == 'P' && grid[c][i] == 'W') {
                ans++;
                grid[c][i] = '.';
                grid[c - 1][i] = '.';
            }

            else if (x == 'W' && grid[c][i] == 'P') {
                ans++;
                grid[c][i] = '.';
                grid[c - 1][i] = '.';
            }

            x = grid[c][i];
        }
    }

    cout << ans << endl;

    return 0;
}