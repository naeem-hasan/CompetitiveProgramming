// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, t;
    cin >> n >> t;
    int books[n];

    int count = 0;
    int max_count = 0;
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> books[i];

        total += books[i];

        if (total <= t) {
            count++;
        } else {
            total -= books[i - count];
        }
        max_count = max(max_count, count);
    }

    cout << max_count << endl;

    return 0;
}