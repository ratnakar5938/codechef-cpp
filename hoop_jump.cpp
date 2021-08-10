#include <iostream>

using namespace std;
int main()
{
    long int t;
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        cout << (n / 2) + 1 << endl;
    }
    return 0;
}