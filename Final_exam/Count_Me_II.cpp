#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        map<int, int> mp;
        int count = 1; 
        int val = A[0]; 
        mp[A[0]] = 1; 

        for (int i = 1; i < N; i++)
        {
            mp[A[i]]++;
            if (mp[A[i]] > count)
            {
                count = mp[A[i]];
                val = A[i];
            }
            else if (mp[A[i]] == count && A[i] > val)
            {
                val = A[i];
            }
        }

        cout << val << " " << count << endl;
    }

    return 0;
}
