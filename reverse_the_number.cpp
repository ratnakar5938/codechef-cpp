#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int a;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        int rem = 0;
        while (a > 0)
        {
            rem = (rem * 10) + (a % 10);
            a = a / 10;
        }
        cout << rem << endl;
    }

    return 0;
}