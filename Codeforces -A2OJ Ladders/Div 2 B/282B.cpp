// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    string ans = "";

    int A = 0;
    int G = 0;

    for (int i = 0; i < n; i++) {
        int a, g;
        cin >> a >> g;

        int d1 = abs(A + a - G);
        int d2 = abs(G + g - A);

        if (d1 < d2) {
            A += a;
            ans += 'A';
        }
        else {
            G += g;
            ans += 'G';
        }
        if (A > G) {
            A = A - G;
            G = 0;
        }
        else {
            G = G - A;
            A = 0;
        }
    }

    if (abs(A - G) > 500)
        cout << -1 << endl;

    else
        cout << ans << endl;


    return 0;
}