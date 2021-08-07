#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int quantity, price;
    double final;
    while (t--)
    {
        cin >> quantity >> price;
        final = quantity * price;
        if (quantity > 1000)
        {
            final = final - (0.1 * final);
        }
        cout << fixed << setprecision(6) << final << endl;
    }
    return 0;
}