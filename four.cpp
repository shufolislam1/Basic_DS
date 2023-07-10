#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int operations = 0;
    string result = s;

    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            operations++;
            if (s[i] == 'a')
            {
                result[i] = 'b';
            }
            else
            {
                result[i] = 'a';
            }
        }
    }

    cout << operations << endl;
    cout << result << endl;

    return 0;
}
