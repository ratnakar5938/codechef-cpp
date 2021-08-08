#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int d, x, y, z;
    while (t--)
    {
        cin >> d >> x >> y >> z;
        cout << max(x * 7, (y * d) + (z * (7 - d))) << endl;
    }
    return 0;
}