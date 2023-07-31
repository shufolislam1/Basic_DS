#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
        }
        string maxword;
        int maxCount = 0;
        int wordIndex = 0; // To keep track of the index of the current word

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > maxCount || (it->second == maxCount && s.find(it->first) < wordIndex))
            {
                maxCount = it->second;
                maxword = it->first;
                wordIndex = s.find(it->first); // Update wordIndex with the current word's index
            }
        }

        cout << maxword << " " << maxCount << endl;
    }

    return 0;
}
