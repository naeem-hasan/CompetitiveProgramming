// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string rate;
    cin >> rate;

    string mx = "-1";
    int n = rate.size();
    int last = rate[n - 1] - '0';
    bool found = false;
    bool even = false;
    int x;

    for (int i = 0; i < n; i++) {
        int c = rate[i] - '0';
        if (!(c & 1)){
            even = true;
            x = i;
            if(last > c){
                mx = rate;
                swap(mx[i], mx[n - 1]);
                found = true;
                break;
            }
        }
    }

    if (!found && even){
        swap(rate[x], rate[n - 1]);
        cout << rate << "\n";
    } else cout << mx << "\n";
    return 0;
}