#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

       
        sort(A.begin(), A.end(), greater<int>());

        
        A.erase(unique(A.begin(), A.end()), A.end());

        
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
