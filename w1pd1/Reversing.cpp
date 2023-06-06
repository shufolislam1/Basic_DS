#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    //with built-in function
    reverse(v.begin(), v.end());
    for(int val:v){
        cout<<val<<" ";
    }

    //without built-in function
    // for (int i = v.size() - 1; i >= 0; i--)
    // {
    //     cout << v[i] << " ";
    // }
    return 0;
}