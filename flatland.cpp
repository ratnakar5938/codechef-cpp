#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int i, res = 0;
        while (n != 0)
        {
            i = sqrt(n);
            n -= i * i;
            res++;
        }
        cout << res << endl;
    }
    return 0;
}