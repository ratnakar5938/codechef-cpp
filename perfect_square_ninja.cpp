#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

long long sumOfDigits(long long n)
{
    long long m, sum = 0;
    while (n > 0)
    {
        m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}

int main()
{

    int t;
    cin >> t;
    long long l, r;
    while (t--)
    {
        cin >> l >> r;
        long long sum;
        long long res = 0;
        for (long long i = l; i <= r; i++)
        {
            sum = sumOfDigits(i);
            if (isPerfectSquare(sum))
                res++;
        }
        cout << res << endl;
    }
    return 0;
}