#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        // if (v.empty())
        //     return true;
        // else
        //     return false;

        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        st.push(x);
    }
    while(st.empty() != true){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}