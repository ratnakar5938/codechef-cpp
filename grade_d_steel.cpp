#include <iostream>

using namespace std;

int grading(int a, double b, int c)
{
    if (a > 50 && b < 0.7 && c > 5600)
    {
        return 10;
    }
    else if (a > 50 && b < 0.7)
    {
        return 9;
    }
    else if (b < 0.7 && c > 5600)
    {
        return 8;
    }
    else if (a > 50 && c > 5600)
    {
        return 7;
    }
    else if (a > 50 || b < 0.7 || c > 5600)
        return 6;
    else
    {
        return 5;
    }
}

int main()
{
    int t;
    cin >> t;
    int hd, ts;
    double cc;
    while (t--)
    {
        cin >> hd >> cc >> ts;
        cout << grading(hd, cc, ts) << endl;
    }
    return 0;
}