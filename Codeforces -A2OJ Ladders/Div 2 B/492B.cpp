// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n, l, a;
    cin >> n >> l;
    vector <int> lights;

    for (int i = 0; i < n; i++){
        cin >> a;
        lights.push_back(a);
    }
    sort(lights.begin(), lights.end());

    int max_diff = max(lights[0] * 2, (l - lights[n - 1]) * 2);
    for (int i = 1; i < n; i++){
        int diff = (lights[i] - lights[i - 1]);
        max_diff = max(max_diff, diff);
    }

    cout << fixed << setprecision(10) << max_diff / 2.0 << "\n";

    return 0;
}