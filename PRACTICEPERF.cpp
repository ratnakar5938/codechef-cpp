#include <iostream>

using namespace std;

int totalWeeksAchievedGoal(int a, int b, int c, int d)
{
    int result = 0;
    if (a >= 10)
    {
        result++;
    }
    if (b >= 10)
    {
        result++;
    }
    if (c >= 10)
    {
        result++;
    }
    if (d >= 10)
    {
        result++;
    }
    return result;
}

int main()
{
    int p1, p2, p3, p4;
    cin >> p1 >> p2 >> p3 >> p4;
    cout << totalWeeksAchievedGoal(p1, p2, p3, p4) << endl;
    return 0;
}