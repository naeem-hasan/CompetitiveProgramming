// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n < 3) {
        cout << n << endl;
        return 0;
    }

    int mx = 2;
    int mxsf = 2; // max so far

    for (int i = 2; i < n; i++) {
        if (arr[i] == arr[i - 1] + arr[i - 2])
            mxsf++;
        else
            mxsf = 2;

        mx = max(mx, mxsf);
    }

    cout << mx << endl;

    return 0;
}