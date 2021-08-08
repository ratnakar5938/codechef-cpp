#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int x, m, d;
    while (t--)
    {
        cin >> x >> m >> d;
        cout << min(x * m, x + d) << endl;
    }
    return 0;
}