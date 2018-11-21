// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    double x, y;
    cin >> x >> y;

    map <double, int> slopes;
    bool inf = false;

    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;

        double d = b - y;
        if (d == 0) {
            inf = true;
            continue;
        }

        slopes[(a - x) / d]++;
    }

    int ans = slopes.size() + inf;

    cout << ans << endl;

    return 0;
}