#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a < b && a < c)
        {
            cout << "Draw" << endl;
        }
        else if (b < a && b < c)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}