#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, x, y;
    while (t--)
    {
        cin >> n >> x >> y;
        if ((n + 1) * y >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}