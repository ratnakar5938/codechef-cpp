#include <iostream>

using namespace std;
int main()
{
    int x;
    while (true)
    {
        cin >> x;
        if (x == 42)
        {
            break;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}