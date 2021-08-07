#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int base;
    int sq;
    while (t--)
    {
        cin >> base;
        base = base / 2;
        sq = (base - 1) * base / 2;
        cout << sq << endl;
    }
    return 0;
}