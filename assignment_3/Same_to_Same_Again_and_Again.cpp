#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    bool aanswer = true;

    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            aanswer = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (aanswer == true && st.empty() && q.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
