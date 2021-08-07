#include <iostream>

using namespace std;

int sum(int n)
{
    return (n * (n + 1)) / 2;
}

int sum(int n, int x)
{
    int result = n;
    for (int i = 0; i < x; i++)
    {
        result = sum(result);
    }
    return result;
}

int main()
{
    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> n;
        cout << sum(n, x) << endl;
    }

    return 0;
}