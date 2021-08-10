#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int h, x, y, c;
    while (t--)
    {
        cin >> h >> x >> y >> c;
        int total = (x + (y / 2)) * h;
        if (total > c)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}