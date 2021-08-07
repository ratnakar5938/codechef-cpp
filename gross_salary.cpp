#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int t;
    cin >> t;
    double base, HRA, DA, gross;
    while (t--)
    {
        cin >> base;
        if (base < 1500)
        {
            HRA = base * 0.1;
            DA = 0.9 * base;
        }
        else
        {
            HRA = 500;
            DA = 0.98 * base;
        }
        gross = base + HRA + DA;
        cout << fixed << setprecision(2) << gross << endl;
    }

    return 0;
}