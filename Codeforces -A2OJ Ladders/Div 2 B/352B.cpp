// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    int diff[100001] = {};
    int prev[100001] = {};
    bool flag[100001] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (flag[arr[i]] && diff[arr[i]] != -1) {
            if (diff[arr[i]] != i - prev[arr[i]] && diff[arr[i]] != 0)
                diff[arr[i]] = -1;
            else
                diff[arr[i]] = i - prev[arr[i]];
        }

        else
            flag[arr[i]] = true;

        prev[arr[i]] = i;
    }

    set <int> nums(arr, arr + n);
    pair <int, int> ans[n];

    int t = 0;

    for (int i : nums) {
        if (diff[i] != -1) {
            ans[t].first = i;
            ans[t].second = diff[i];
            t++;
        }
    }

    cout << t << endl;
    for (int i = 0; i < t; i++)
        cout << ans[i].first << " " << ans[i].second << endl;

    return 0;
}