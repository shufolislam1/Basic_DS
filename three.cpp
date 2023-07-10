#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> days(n);
        for (int i = 0; i < n; i++) {
            cin >> days[i];
        }

        int lastSpray = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            int diff = days[i] - lastSpray - 1;
            int remainingDays = m - days[i] + 1;

            if (diff >= k || remainingDays < k) {
                possible = false;
                break;
            }

            k -= diff;
            lastSpray = days[i];
        }

        if (possible && m - lastSpray < k)
            possible = false;

        cout << (possible ? "Yes" : "No") << endl;
    }

    return 0;
}
