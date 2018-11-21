// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[n];

    int t = 0;
    bool assigned = false;

    cin >> arr[0];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];

        if (arr[i] < arr[i - 1]) {
            if (assigned){
                cout << -1 << "\n";
                return 0;
            }
            t = i;
            assigned = true;
        }
    }

    if (arr[0] < arr[n - 1]){
        if (assigned){
            cout << -1 << "\n";
            return 0;
        }
    }

    if (t == 0) cout << 0 << "\n";
    else cout << n - t << "\n";

    return 0;
}