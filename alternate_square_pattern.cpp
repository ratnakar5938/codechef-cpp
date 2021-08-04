#include <iostream>

using namespace std;
int main()
{

    int t;
    cin >> t;
    int k = 0;
    for (int i = 1; i <= t; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= 5; j++)
            {
                k++;
                cout << k << " ";
            }
            cout << endl;
        }
        else
        {
            k += 5;
            int l = k;
            for (int j = 5; j >= 1; j--)
            {
                cout << l << " ";
                l--;
            }
            cout << endl;
        }
    }

    return 0;
}