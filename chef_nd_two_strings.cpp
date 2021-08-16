#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, min, max;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;

        int l = s1.length();
        min = 0;
        max = 0;
        for (int i = 0; i < l; i++)
        {
            if (s1[i] == '?' || s2[i] == '?')
            {
                max++;
            }
            if (s1[i] != s2[i] && s1[i] != '?' && s2[i] != '?')
            {
                min++;
                max++;
            }
        }

        cout << min << " " << max << endl;
    }
    return 0;
}
