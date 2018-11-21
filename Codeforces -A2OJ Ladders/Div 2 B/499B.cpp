// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    map <string, string> lang;

    while (m--){
        string first;
        string second;
        cin >> first >> second;
        if (first.size() <= second.size()){
            lang[first] = first;
            lang[second] = first;
        } else {
            lang[first] = second;
            lang[second] = second;
        }
    }

    while (n--){
        string t;
        cin >> t;
        cout << lang[t];
        if (n > 0) cout << " ";
    }

    return 0;
}