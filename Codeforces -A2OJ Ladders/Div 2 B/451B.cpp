// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int p = 0;
    int i = 0, j = 0;
    bool ascending = true;

    int arr[n];

    for (int c = 0; c < n; c++){
        int x;
        cin >> x;

        if (x > p){
            if (ascending){
                i++;
                j++;
            }
        } else {
            j++;
            ascending = false;
        }
        arr[c] = x;
        p = x;
    }

    p = 0;

    for (int c = 0; c < n; c++){
        int x;
        if (c >= (i - 1) && c <= (j - 1)){
            x = arr[i + j - c - 2];
        } else {
            x = arr[c];
        }
        if (p > x){
            cout << "no\n";
            return 0;
        }
        p = x;
    }

    if (i == j) cout << "yes\n1 1\n";
    else cout << "yes\n" << i << " " << j << "\n";
    
    return 0;
}