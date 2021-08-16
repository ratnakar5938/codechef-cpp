#include <iostream>

using namespace std;

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    int x, y, xr, yr, d;
    while (t--)
    {
        cin >> x >> y >> xr >> yr >> d;
        int survival = min((x / xr), (y / yr));
        if (d <= survival)
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