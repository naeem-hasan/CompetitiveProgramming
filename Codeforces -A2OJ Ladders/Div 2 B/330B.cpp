// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    bool fire[1001] = {false};
    cin >> n >> m;
    
    while (m--) {
        int a, b;
        cin >> a >> b;
        fire[a] = true;
        fire[b] = true;
    }

    int x = 1;
    while (fire[x])
        x++;
    
    cout << n - 1 << endl;
    
    for (int i = 1; i < x; i++)
        cout << i << " " << x << endl;

    for (int i = x + 1; i <= n; i++)
        cout << x << " " << i << endl;

    return 0;
}