// I write these codes in steel, for anything not set in metal cannot be trusted

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    long long int sum = 0;
    int x = 0;
    int y = 0;
    int i;

    int lx[n] = {0}, ly[n] = {0};

    for (int _ = 0; _ < n; _++) {
        cin >> i;
        sum += i;
        if (i > 0) {
            lx[x] = i;
            x++;
        }
        else {
            ly[y] = i;
            y++;
        }
    }

    if (sum > 0)
        cout << "first";

    else if (sum < 0)
        cout << "second";

    else {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if ((lx[j] == 0) && (ly[j] == 0))
                break;
            if (lx[j] > abs(ly[j])) {
                found = true;
                cout << "first";
                break;
            }

            else if (lx[j] < abs(ly[j])) {
                found = true;
                cout << "second";
                break;
            }
        }

        if (!found) {
            if (x > y)
                cout << "first";

            else if (x < y)
                cout << "second";

            else {
                if (i > 0)
                    cout << "first";

                else
                    cout << "second";
            }
        }
    }

    cout << endl;
    return 0;
}