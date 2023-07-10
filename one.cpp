#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        int dval = 0;
        // bool isDistinct;
        
        for (int i = a - 1; i < b; i++) {
            bool some = true;
            
            for (int j = a - 1; j < i; j++) {
                if (arr[i] == arr[j]) {
                    some = false;
                    break;
                }
            }
            
            if (some) {
                dval++;
            }
        }

        cout << dval << endl;
    }

    return 0;
}
