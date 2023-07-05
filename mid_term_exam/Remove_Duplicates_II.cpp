#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break; // Exit the loop if -1 is entered
        mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();
    for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}