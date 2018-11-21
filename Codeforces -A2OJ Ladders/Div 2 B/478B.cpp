// I write these codes in steel, for anything not set in metal cannot be trusted

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long long int a, b;
    cin >> a >> b;

    long long int x = a / b;
    long long int r = a % b;

    if (x > 1) cout << (x * (x - 1) / 2 * (b - r)) + (((x + 1) * x / 2) * r) << " ";
    else cout << r << " ";

    long long y = a + 1 - b;
    cout << y * (y - 1) / 2 << '\n';

    return 0;
}