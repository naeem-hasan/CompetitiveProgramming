// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);

    string s;
    string t;
    cin >> s >> t;

    if (s.size() < t.size()){
        cout << "need tree\n";
        return 0;
    }

    int j = 0;

    for (int i = 0; i < s.size(); i++){
        if (j == t.size()) break;
        if (s[i] == t[j]) j++;
    }

    if (j == t.size()){
        cout << "automaton\n";
        return 0;
    }

    bool flag = true;

    for (int i = 0; i < t.size(); i++) {
        if (count(s.begin(), s.end(), t[i]) < count(t.begin(), t.end(), t[i])){
            flag = false;
            break;
        }
    }

    if (flag){
        if (s.size() == t.size()) cout << "array\n";
        else cout << "both\n"; 
    } else cout << "need tree\n";

    return 0;
}