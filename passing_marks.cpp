#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int A_min, B_min, C_min, T_min, A, B, C;
    while (t--)
    {
        cin >> A_min >> B_min >> C_min >> T_min >> A >> B >> C;
        if (A >= A_min && B >= B_min && C >= C_min && (A + B + C) >= T_min)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}