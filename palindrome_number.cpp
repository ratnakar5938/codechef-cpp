#include <iostream>

using namespace std;

long long int Reverse(int x)
{
    long long int newNum = 0;
    while (x > 0)
    {
        newNum = (newNum * 10) + (x % 10);
        x /= 10;
    }
    return newNum;
}

class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long int newNum = Reverse(x);
        return x == newNum;
    }
};

int main()
{
    int t;
    cin >> t;
    int x;
    Solution sol;
    while (t--)
    {
        cin >> x;
        if (sol.isPalindrome(x))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    return 0;
}