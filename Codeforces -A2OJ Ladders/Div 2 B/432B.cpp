// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int away_colors[n];
    map <int, int> home_count;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        away_colors[i] = y;
        home_count[x]++;
    }

    int t = (n - 1);

    for (int i = 0; i < n; i++) {
        int x = t + home_count[away_colors[i]];
        cout << x << " " << t * 2 - x << endl;
    }

    return 0;
}