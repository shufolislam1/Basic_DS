#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        pq.push(v1[i]);
    }

    while (q--) {
        int a;
        cin >> a;
        if (a == 0) {
            int x;
            cin >> x;
            v1.push_back(x);
            pq.push(x);
            cout << pq.top() << endl;
        } else if (a == 1) {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        } else if (a == 2) {
            if (pq.empty())
                cout << "Empty" << endl;
            else {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
        }
    }
    return 0;
}
