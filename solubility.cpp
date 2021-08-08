#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int x, a, b;
    int result;
    while (t--)
    {
        cin >> x >> a >> b;
        result = a + ((100 - x) * b);
        result *= 10;
        cout << result << endl;
    }

    return 0;
}