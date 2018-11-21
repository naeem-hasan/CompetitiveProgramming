// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, s, t;
    cin >> n >> s >> t;

    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++){
        if (s == t) {
            cout << ans << "\n";
            return 0;
        }

        s = p[s - 1];
        ans++;
    }
    cout << "-1\n";
    return 0;
}