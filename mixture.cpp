#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        if (a == 0)
        {
            cout << "Liquid" << endl;
        }
        else if (b == 0)
        {
            cout << "Solid" << endl;
        }
        else
        {
            cout << "Solution" << endl;
        }
    }
    return 0;
}