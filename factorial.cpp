#include <iostream>

using namespace std;

long long fac(long long n)
{
    long long count = 0;
    for (int i = 5; n / i > 0; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main()
{
    long long t = 0, num;
    cin >> t;
    while (t--)
    {
        cin >> num;
        cout << fac(num) << endl;
    }
    return 0;
}