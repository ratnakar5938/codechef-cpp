#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int result = a - b;
    if (result % 10 == 9)
    {
        cout << result - 1 << endl;
    }
    else
    {
        cout << result + 1 << endl;
    }

    return 0;
}