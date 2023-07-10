#include <iostream>
#include <queue>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    queue<string> qu;
    while (q--) {
        int x;
        string y;
        cin >> x;
        if (x == 0) {
            cin >> y;
            qu.push(y);
        } else if (x == 1) {
            if (!qu.empty()) {
                cout << qu.front() << endl;
                qu.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }
    
    return 0;
}
