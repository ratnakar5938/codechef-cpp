#include <iostream>

using namespace std;
int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    if (c + (((20 - o) * 6) * 6) > r)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}