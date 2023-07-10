#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    cin.ignore(); // shalar eitar jonno etto kahini !!!!!!
    while (q--)
    {
        string s;
        getline(cin, s);

        stack<char> st;
        for (char c : s) {
            if (st.empty() != true && st.top() != c) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        if (st.empty() == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    
    return 0;
}