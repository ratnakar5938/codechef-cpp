#include <iostream>

using namespace std;
int main()
{
    int t;
    int x, y, a, b, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b >> k;
        long int res1, res2;
        res1 = x + (k * a);
        res2 = y + (k * b);
        if (res1 > res2)
        {
            cout << "DIESEL" << endl;
        }
        else if (res1 < res2)
        {
            cout << "PETROL" << endl;
        }
        else
        {
            cout << "SAME PRICE" << endl;
        }
    }

    return 0;
}