#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int N, A, B, total;
    while (t--)
    {
        cin >> N >> A >> B;
        total = 2 * (180 + N);

        total -= (A + B);
        cout << total << endl;
    }
    return 0;
}