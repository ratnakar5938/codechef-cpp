#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;
int main()
{
    int t;
    cin >> t;
    ll a, b;
    while (t--)
    {
        cin >> a >> b;
        ll GCD = __gcd(a, b);
        ll LCM = (a / GCD) * b;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}