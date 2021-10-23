#include <iostream>

using namespace std;
int main()
{
    int t;
    int x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
        {
            cout << (x - y) << endl;
        }
        else if (x == y)
        {
            cout << 0 << endl;
        }
        else
        {
            int result;
            if ((y - x) % 2 == 0)
            {
                result = (y - x) / 2;
            }
            else
            {
                result = ((y - x) / 2) + 2;
            }

            cout << result << endl;
        }
    }
    return 0;
}