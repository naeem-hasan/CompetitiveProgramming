// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string p;
    cin >> p;
    int k;
    cin >> k;

    int w[26];
    int mx = -1;
    int total = 0;

    for (int i = 0; i < 26; i++){
        cin >> w[i];
        mx = max(mx, w[i]);
    }

    for (int i = 0; i < p.size(); i++){
        total += (i + 1) * w[p[i] - 97];
    }

    total += mx * (k * (p.size() + 1) + ((k - 1) * k / 2));
    cout << total << "\n";
    return 0;
}