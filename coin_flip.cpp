#include <iostream>
#include <vector>

using namespace std;

int coinFlip(int i, int n, int q)
{
    int ans;

    return ans;
}

int main()
{
    int t, g, ans;
    int i, n, q;
    cin >> t;
    while (t--)
    {
        cin >> g;
        while (g--)
        {
            cin >> i >> n >> q;
            if (n % 2)
            {
                if (1 == q)
                {
                    ans = n / 2;
                }
                else
                {
                    ans = n - (n / 2);
                }
            }
            else
            {
                if (i == q)
                {
                    ans = n - (n / 2);
                }
                else
                {
                    ans = n / 2;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}