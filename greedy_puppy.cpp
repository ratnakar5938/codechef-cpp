#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k, res = 0;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            if (res < (n % i))
            {
                res = n % i;
            }
        }
        cout << res << endl;
        res = 0;
    }
    return 0;
}