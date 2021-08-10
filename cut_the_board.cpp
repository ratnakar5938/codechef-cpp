#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n >> m;
        cout << (n - 1) * (m - 1) << endl;
    }
    return 0;
}