#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        vector<long int> a(n);
        long int sum = 0, rem, res = 0;
        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        rem = sum % k;
        // long int i = a.size() - 1;
        if (rem == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            // while (rem > 0)
            // {
            //     rem -= a[i];
            //     res++;
            //     i--;
            // }
            cout << 1 << endl;
        }
    }
    return 0;
}