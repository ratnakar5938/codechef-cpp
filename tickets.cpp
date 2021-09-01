#include <iostream>
#include <string>

using namespace std;

void check(string s)
{
    bool b = true;

    if (s[0] == s[1])
        b = false;

    for (int i = 0; i < s.length() - 2; i++)
        if (s[i] != s[i + 2])
        {
            b = false;
            break;
        }

    if (b)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        check(s);
    }

    return 0;
}