#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, k;
    cin >> t >> k;
    vector<int> a;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    bool b = false;
    for (auto i : a)
    {
        if (i == k)
        {
            b = true;
        }
    }
    if (b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << (-1) << endl;
    }

    return 0;
}