// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int d, sum_time;
    cin >> d >> sum_time;

    int mn[d], mx[d];
    int p = 0;

    for (int i = 0; i < d; i++) {
        cin >> mn[i] >> mx[i];
        p += mn[i];
    }

    sum_time -= p;

    if (sum_time < 0) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < d; i++) {
        if (sum_time == 0)
            break;
        
        int add = min(mx[i] - mn[i], sum_time);
        mn[i] += add;
        sum_time -= add;
    }

    if (sum_time == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < d; i++) {
            cout << mn[i] << " ";
        }
    }

    else
        cout << "NO";

    cout << endl;
    return 0;
}