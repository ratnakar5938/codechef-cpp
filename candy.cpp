#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}

int main()
{
    int t, n, m, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<pair<int, int>> val;
        while (n--)
        {
            cin >> a >> b;
            val.push_back(pair<int, int>(a, b));
        }
        sort(val.begin(), val.end(), cmp);
        long long result = 0;
        for (auto &it : val)
        {
            if (m < 0)
            {
                break;
            }
            if (m > it.first)
            {
                result += (it.first) * (it.second);
            }
            else
            {
                result += m * (it.second);
            }
            m -= it.first;
        }
        cout << result << endl;
    }
    return 0;
}