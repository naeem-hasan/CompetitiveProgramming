// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const float PI = 3.141592653589793238462643383279502884;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    int radii[n];

    for (int i = 0; i < n; i++) 
        cin >> radii[i];

    sort(radii, radii + n);

    float ans = 0.0;
    float m = 1.0;

    for (int i = 0; i < n; i++) {
        float radius = (float) radii[i];
        ans += PI * radius * radius * m;
        m *= -1;
    }

    cout << abs(ans) << endl;

    return 0;
}