#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int A, B, X;
    while (t--)
    {
        cin >> A >> B >> X;
        if ((B - A) % X == 0)
        {
            cout << (B - A) / X << endl;
        }
        else
        {
            cout << ((B - A) / X) + 1 << endl;
        }
    }

    return 0;
}