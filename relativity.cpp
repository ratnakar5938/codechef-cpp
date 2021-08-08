#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int g, c, h;
    while (t--)
    {
        cin >> g >> c;
        h = (c * c) / (2 * g);
        cout << h << endl;
    }
    return 0;
}