#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, k, p;
        cin >> n >> x >> k >> p;

        if (p == 0) {
            cout << 0 << endl;
            continue;
        }

        int ml = 0;

        if (k < x) {
            ml += (10 * k);
        } else if(k>x){
            ml += (10 * x);
            ml += (5 * abs(k - x));
        }

        if (n <= k) {
            ml += 20;
        }

        ml += p;

        cout << ml << endl;
    }

    return 0;
}
