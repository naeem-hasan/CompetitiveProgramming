// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    map <char, string> bin;
    bin['>'] = "1000";
    bin['<'] = "1001";
    bin['+'] = "1010";
    bin['-'] = "1011";
    bin['.'] = "1100";
    bin[','] = "1101";
    bin['['] = "1110";
    bin[']'] = "1111";

    string s;
    cin >> s;

    string b = "";

    for (char c : s)
        b += bin[c];

    long long int ans = 0;
    long long int base = 1;
    int n = b.size();

    for (int i = n - 1; i >= 0; i--) {
        if (b[i] == '1')
            ans = (ans + base) % 1000003;
        base = (base % 1000003) * 2;
    }

    cout << ans << endl;

    return 0;
}