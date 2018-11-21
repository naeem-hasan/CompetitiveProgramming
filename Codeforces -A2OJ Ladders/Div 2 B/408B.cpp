// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string n, m;
    cin >> n >> m;

    map <char, int> n_count;
    map <char, int> m_count;

    for (char c : m) {
        m_count[c]++;
        n_count[c] = 0;
    }

    for (char c : n)
        n_count[c]++;

    int ans = 0;
    for (auto& c : m_count) {
        if (n_count[c.first] == 0) {
            ans = 0;
            break;
        }
        ans += min(c.second, n_count[c.first]);
    }

    if (ans == 0)
        cout << -1;
    else
        cout << ans;

    cout << endl;

    return 0;
}