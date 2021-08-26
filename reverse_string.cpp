#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> res(s.size());
    for (int i = 0; i < s.size() / 2; i++)
    {
        res[i] = s[s.size() - i - 1];
        res[s.size() - i - 1] = s[i];
    }

    for (auto i : res)
    {
        cout << i;
    }
    cout << endl;

    return 0;
}