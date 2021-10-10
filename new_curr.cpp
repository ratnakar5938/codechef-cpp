#include <iostream>

using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    long long p;
    while (t--)
    {
        cin >> p;
        int res = 0;
        for (int i = 10; i > 0; i--)
        {
            if (p > 0)
            {
                long long temp = factorial(i);
                if (p >= temp)
                {
                    res += (p / temp);
                    p -= (p / temp) * temp;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}