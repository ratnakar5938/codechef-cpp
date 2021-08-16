#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        long long c = 0;
        vector<long long> s(n), r(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> s[i] >> r[i];
        }
        for (long long i = 0, j = 0; i < n, j < n; i++, j++)
        {
            if (s[i] <= x)
            {
                c = max(c, r[i]);
            }
        }
        cout << c << endl;
    }
    return 0;
}