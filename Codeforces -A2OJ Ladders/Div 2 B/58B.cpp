// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    const int TOTAL = 1000002;
    bool sieve[TOTAL] = {};
  
    for (int i = 2; i * i <= TOTAL; i++) {
        if (!sieve[i]){ 
            for (int j = i * 2; j <= TOTAL; j += i) 
                sieve[j] = true; 
        } 
    } 
    
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    while (2 > 1) {
        cout << n << " ";

        if (!sieve[n]) {
            cout << 1;
            break;
        }

        for (int i = 2; i * i < n + 1; i++) {
            if (n % i == 0) {
                n /= i;
                break;
            }
        }
    }

    cout << endl;

    return 0;
}