#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n = t - 1;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (t - n); j++)
        {
            cout << "*";
        }

        cout << endl;
        n--;
    }

    return 0;
}