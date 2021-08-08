#include <iostream>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long a[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        long long k;
        cin >> k;
        int j = 9;
        while (k >= 0)
        {
            k -= a[j];
            j--;
        }

        cout << j + 2 << endl;
    }

    return 0;
}