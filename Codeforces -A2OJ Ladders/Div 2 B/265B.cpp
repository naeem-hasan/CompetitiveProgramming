// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int total = 0;
    int pos;
    int n;
    cin >> n;

    cin >> pos;
    total += pos + 1;
    n--;

    while (n--) {
        int h;
        cin >> h;
        total += abs(h - pos);
        total++;
        total++;
        pos = h;
    }

    cout << total << "\n";

    return 0;
}