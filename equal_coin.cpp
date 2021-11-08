#include <iostream>

using namespace std;
int main()
{
    int t;
    long long x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int one = x * 1, two = y * 2;
        if ((one + two) > 0 && (one + two) % 2 == 0)
        {
            if (x % 2 == 0)
            {
                if (x == 0)
                {
                    if (y % 2 == 0)
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
                    cout << "YES" << endl;
                }
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