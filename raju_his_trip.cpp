#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t % 5 == 0 || t % 6 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}