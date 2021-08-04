#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    long long even = 0;
    long long odd = 0;
    for (int i = 0; i < t; i++)
    {
        even += (i * 2) + 2;
        odd += (i * 2) + 1;
    }
    cout << odd << " " << even << endl;

    return 0;
}