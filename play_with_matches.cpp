#include <iostream>

using namespace std;

int matches(int n)
{
    if (n == 0 || n == 6 || n == 9)
    {
        return 6;
    }
    else if (n == 1)
    {
        return 2;
    }
    else if (n == 2 || n == 3 || n == 5)
    {
        return 5;
    }
    else if (n == 4)
    {
        return 4;
    }
    else if (n == 7)
    {
        return 3;
    }
    else if (n == 8)
    {
        return 7;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    long int a, b;
    int sum, res;
    while (t--)
    {
        cin >> a >> b;
        sum = a + b;
        res = 0;
        while (sum > 0)
        {
            res += matches(sum % 10);
            sum /= 10;
        }
        cout << res << endl;
    }
    return 0;
}