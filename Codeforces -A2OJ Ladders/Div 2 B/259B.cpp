// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false);

    int a, b, c,
        d, e, f,
        g, h, i;
    
    int mx;

    cin >> a >> b >> c;
    mx = b + c;
    cin >> d >> e >> f;
    mx = max(mx, e + f);
    cin >> g >> h >> i;
    mx = max(mx, g + h);

    for (int x = mx + 1; i < 1e5; x++) {
        a = x - b - c;
        e = x - b - h;
        i = x - g - h;

        if (a + e + i == x) break;
    }

    cout << a << " " << b << " " << c << endl;
    cout << d << " " << e << " " << f << endl;
    cout << g << " " << h << " " << i << endl;

    return 0;
}