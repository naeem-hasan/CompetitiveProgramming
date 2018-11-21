// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;
    map <char, int> count;

    for (char c : s) {
        count[c]++;
    }

    if (count['4'] == 0 && count['7'] == 0)
        cout << -1;

    else if (count['7'] > count['4'])
        cout << '7';

    else
        cout << '4';

    cout << endl;

    return 0;
}