#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int xa, xb, Xa, Xb;
    int total;
    while (t--)
    {
        cin >> xa >> xb >> Xa >> Xb;
        if (Xa % xa == 0)
        {
            if (Xb % xb == 0)
            {
                total = (Xa / xa) + (Xb / xb);
                cout << total << endl;
            }
            else
            {
                total = (Xa / xa) + (Xb / xb) + 1;
                cout << total << endl;
            }
        }
        else
        {
            if (Xb % xb == 0)
            {
                total = (Xa / xa) + (Xb / xb) + 1;
                cout << total << endl;
            }
            else
            {
                total = (Xa / xa) + (Xb / xb) + 2;
                cout << total << endl;
            }
        }
    }
    return 0;
}