#include <iostream>

using namespace std;
int main()
{
    int t;
    long long k;
    int a, b;
    cin >> t;
    while (t--)
    {
        cin >> k >> a >> b;
        long long sum = a + b, spent = 2, digit = (a + b) % 10;
        if (digit == 0 || digit == 5)
        {
            sum += digit;
        }
        else
        {
            while (digit != 2 && spent <= k)
            {
                sum += digit;
                spent++;
                digit = (digit * 2) % 10;
            }
            k -= spent;
            sum += 20 * (k / 4);
            switch (k % 4)
            {
            case 3:
                sum += 8;
            case 2:
                sum += 4;
            case 1:
                sum += 2;
            }
        }
        if (sum % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}