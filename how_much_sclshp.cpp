#include <iostream>

using namespace std;
int main()
{
    long long r;
    cin >> r;
    if (r <= 50)
    {
        cout << 100 << endl;
    }
    else if (r > 50 && r <= 100)
    {
        cout << 50 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}