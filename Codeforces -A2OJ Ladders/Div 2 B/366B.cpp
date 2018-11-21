// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n];
    int sum = 100000000;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 1;

    for (int i = 0; i < k; i++) {
        int s = 0;

        for (int j = i; j < n; j += k)
            s += arr[j];

        if (s < sum) {
            sum = s;
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}