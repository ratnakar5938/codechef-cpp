#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        if (a == b && a == c)
        {
            cout << 1 << endl;
        }
        else if (a == b || a == c)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}