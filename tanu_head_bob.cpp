#include <iostream>
#include <string>

using namespace std;
int main()
{
    int t, n;
    cin >> t;
    string get;
    bool b = false;
    while (t--)
    {
        cin >> n;
        cin >> get;
        int i = 0;
        while (i < n)
        {
            if (get[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                b = true;
                break;
            }
            else if (get[i] == 'I')
            {
                cout << "INDIAN" << endl;
                b = true;
                break;
            }
            i++;
        }
        if (!b)
        {
            cout << "NOT SURE" << endl;
        }
        b = false;
    }
    return 0;
}