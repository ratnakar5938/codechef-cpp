#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int yr;
    while (t--)
    {
        cin >> yr;
        if (yr == 2010 || yr == 2015 || yr == 2016 || yr == 2017 || yr == 2019)
        {
            cout << "HOSTED" << endl;
        }
        else
        {
            cout << "NOT HOSTED" << endl;
        }
    }
    return 0;
}