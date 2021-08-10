#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        if (isPrime(n))
        {
            cout << 1 << " " << n << endl;
        }
        else
        {
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    cout << i << " " << n / i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}