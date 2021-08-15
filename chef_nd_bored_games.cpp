#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, result;
    while (t--)
    {
        result = 0;
        cin >> n;
        while (n > 0)
        {
            result += n * n;
            n -= 2;
        }
        cout << result << endl;
    }
    return 0;
}