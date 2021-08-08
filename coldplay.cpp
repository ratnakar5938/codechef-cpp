#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int m, s;
    int res;
    while (t--)
    {
        cin >> m >> s;
        res = m / s;
        cout << res << endl;
    }

    return 0;
}