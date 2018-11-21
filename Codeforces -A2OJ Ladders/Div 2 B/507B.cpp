// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, x, y, a, b;
    cin >> r >> x >> y >> a >> b;

    double distance = sqrt(pow(x - a, 2.0) + pow(y - b, 2.0));
    cout << (int) ceil(distance / r / 2.0) << "\n";

    return 0;
}