#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {1, 222, 3, 4};
    list<int> newList = {2, 333, 44, 5};

    // list<int> newList;
    // newList = myList;
    // for (int val : newList)
    // {
    //     cout << val << endl;
    // }
    // myList.push_back(100);
    // myList.push_front(200);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 3), 999);
    // myList.insert(next(myList.begin(), 3), {2,333,44,5});
    myList.insert(next(myList.begin(), 3), newList.begin(), newList.end());

    // myList.erase(next(myList.begin(), 3));
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}