#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[26]{0};

        int l = s.length();
        int n = l / 2;

        for (int i = 0; i < n; i++)
            a[s[i] - 'a']++;

        for (int i = l - n; i < l; i++)
            a[s[i] - 'a']--;

        bool b = true;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != 0)
            {
                cout << "NO\n";
                b = false;
                break;
            }
        }
        if (b == true)
            cout << "YES\n";
    }
    return 0;
}