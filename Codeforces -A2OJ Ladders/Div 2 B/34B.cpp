// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    int sum = 0;

    for (int i = 0; i < m; i++) {
        if (arr[i] >= 0)
            break;
        sum += arr[i] * -1;
    }

    cout << sum << endl;

    return 0;
}