#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int x, res = 0;
    while (t--)
    {
        cin >> x;
        while (x > 0)
        {
            if (x % 10 == 4)
            {
                res++;
            }
            x /= 10;
        }
        cout << res << endl;
        res = 0;
    }

    return 0;
}