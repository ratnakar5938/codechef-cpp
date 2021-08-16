#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    long long n;
    while (t--)
    {
        cin >> n;
        if (n % 5 == 0 && n % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 5 == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}