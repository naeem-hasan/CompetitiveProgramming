// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int p, q, l, r;
    cin >> p >> q >> l >> r;

    pair <int, int> lz[p];
    pair <int, int> lx[q];

    for (int i = 0; i < p; i++) {
        cin >> lz[i].first >> lz[i].second;
    }

    for (int i = 0; i < q; i++) {
        cin >> lx[i].first >> lx[i].second;
    }

    bool flag = false;
    int ans = 0;

    for (int i = l; i <= r; i++) {
        flag = false;
        for (int x = 0; x < p; x++){
            if (flag)
                continue;

            for (int y = 0; y < q; y++){
                if ((lz[x].second < i + lx[y].first) || (i + lx[y].second < lz[x].first))
                    continue;

                else {
                    flag = true;
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}