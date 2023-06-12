#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool some = false;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] <= arr[j])
                {
                    continue;
                }
                else
                {
                    some = true;
                    break;
                }
            }
        }
        if (some == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
