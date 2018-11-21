// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) { 
    if (n <= 1)
        return false; 
    if (n <= 3)
        return true; 
  
    if (n%2 == 0 || n%3 == 0)
        return false; 
  
    for (int i = 5; i*i <= n; i = i+6) 
        if (n%i == 0 || n % (i + 2) == 0) 
           return false;
  
    return true; 
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    while (n--){
        long long int x;
        cin >> x;
        long double d = sqrt(x);
        if (d - floor(d) == 0) {
            if (is_prime((int)d)) cout << "YES";
            else cout << "NO";
        } else cout << "NO";
        cout << "\n";
    }
    return 0;
}