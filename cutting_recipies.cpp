#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;
int main()
{
    ll int t;
    cin >> t;
    ll int n, gcd;
    while (t--)
    {
        cin >> n;
        ll int num[n];
        for (ll int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        gcd = num[0];

        for (ll int i = 0; i < n; i++)
        {
            gcd = __gcd(num[i], gcd);
        }

        for (ll int i = 0; i < n; i++)
        {
            cout << num[i] / gcd << " ";
        }
        cout << endl;
    }
    return 0;
}