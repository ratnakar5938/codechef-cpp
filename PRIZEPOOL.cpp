#include <iostream>

using namespace std;

int totalMoney(int x, int y)
{
    return (x * 10) + (y * 90);
}

int main()
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        cin >> x >> y;
        cout << totalMoney(x, y) << endl;
    }

    return 0;
}