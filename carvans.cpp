#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maximum(vector<int> cs)
{
    int res = 0;
    int maxSpeed = cs[0];
    for (int i = 0; i < cs.size(); i++)
    {
        if (cs[i] <= maxSpeed)
        {
            res++;
            maxSpeed = min(maxSpeed, cs[i]);
        }
    }
    return res;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> cs;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cs.push_back(x);
        }
        cout << maximum(cs) << endl;
    }
    return 0;
}