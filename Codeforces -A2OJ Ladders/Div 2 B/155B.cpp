// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    pair <int, int> cards[n];

    for (int i = 0; i < n; i++) {
        cin >> cards[i].first >> cards[i].second;
    }

    sort(cards, cards + n, [](auto &a, auto &b){
        if (a.second == b.second)
            return a.first > b.first;
        return a.second > b.second;
    });

    int ans = 0;
    int counter = 1;

    for (auto card : cards) {
        if (counter == 0)
            break;

        ans += card.first;
        counter += card.second - 1;
    }

    cout << ans << endl;

    return 0;
}