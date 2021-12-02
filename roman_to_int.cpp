#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool Algo(char i, char j)
{
    if (j == 'I' && (i == 'V' || i == 'X' || i == 'L' || i == 'C' || i == 'D' || i == 'M'))
    {
        return true;
    }
    else if (j == 'V' && (i == 'X' || i == 'L' || i == 'C' || i == 'D' || i == 'M'))
    {
        return true;
    }
    else if (j == 'X' && (i == 'L' || i == 'C' || i == 'D' || i == 'M'))
    {
        return true;
    }
    else if (j == 'L' && (i == 'C' || i == 'D' || i == 'M'))
    {
        return true;
    }
    else if (j == 'C' && (i == 'D' || i == 'M'))
    {
        return true;
    }
    else if (j == 'D' && i == 'M')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Integer(char x)
{
    if (x == 'I')
        return 1;
    else if (x == 'V')
        return 5;
    else if (x == 'X')
        return 10;
    else if (x == 'L')
        return 50;
    else if (x == 'C')
        return 100;
    else if (x == 'D')
        return 500;
    else
        return 1000;
}

class Solution
{
public:
    int romanToInt(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            st.push(s[i]);
        }
        int result = 0;
        while (!st.empty())
        {
            char x = st.top();
            st.pop();
            result += Integer(x);
            if (st.size() != 0)
            {
                char y = st.top();
                if (Algo(x, y))
                {
                    result -= Integer(y);
                    st.pop();
                }
            }
        }
        return result;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution sol;
    cout << sol.romanToInt(s) << endl;

    return 0;
}