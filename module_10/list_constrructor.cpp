#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    // list<int> myList(10,2);
    // cout<<myList.size()<<endl;
    // cout<<myList.front()<<endl;

    // int aarr[5]= {1,2,3,4,50};
    // list<int> myList(aarr, aarr+5);

    vector<int> v = {22, 3, 4, 55, 6};
    list<int> myList(v.begin(), v.end());
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}