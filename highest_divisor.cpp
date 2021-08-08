#include <iostream>

using namespace std;
int main()
{
    int t;
    int res = 1;
    cin >> t;
    for (int i = 2; i <= 10; i++)
    {
        if (t % i == 0)
        {
            res = i;
        }
    }
    cout << res << endl;
    return 0;
}