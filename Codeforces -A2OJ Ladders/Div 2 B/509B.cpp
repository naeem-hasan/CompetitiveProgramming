// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k;

    cin >> n >> k;

    int piles[n];
 
    for(int i = 1; i <= n; i++)
        cin >> piles[i];
 
    int mx = piles[1], mn = piles[1];

    for(int i = 1; i <= n; i++) {
        if(piles[i] > mx) mx = piles[i];
        if(piles[i] < mn) mn = piles[i];
    }
 
    if(mx - mn <= k) {
        cout << "YES" << endl;
 
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= k; j++) {
                int times = piles[i] / k;
 
                if(piles[i] % k >= j) times++;
 
                for(int t = 1; t <= times; t++)
                    cout << j << " ";
 
            }
            cout << endl;
        }
 
    }
    else
        cout << "NO" << endl;
 
    return 0;
}