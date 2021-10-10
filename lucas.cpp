#include <iostream>

using namespace std;

long long lucas(int n)
{
    // if (n == 0)
    // {
    //     return 2;
    // }
    // if (n == 1)
    // {
    //     return 1;
    // }
    // return lucas(n - 1) + lucas(n - 2);
    long long res;
    long long temp1 = 2, temp2 = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            res = 2;
        }
        else if (i == 1)
        {
            res = 1;
        }
        else
        {
            res = temp1 + temp2;
            temp1 = temp2;
            temp2 = res;
        }
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        cout << lucas(n) << endl;
    }

    return 0;
}