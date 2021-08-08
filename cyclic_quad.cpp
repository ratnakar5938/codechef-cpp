#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d == 360)
        {
            if (a + c == 180 && b + d == 180)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}