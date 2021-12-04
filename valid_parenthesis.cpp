#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        bool b = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (st.empty())
                {
                    b = false;
                }
                else
                {
                    if (s[i] == ')')
                    {
                        if (st.top() == '(')
                        {
                            st.pop();
                        }
                        else
                        {
                            b = false;
                        }
                    }
                    else if (s[i] == '}')
                    {
                        if (st.top() == '{')
                        {
                            st.pop();
                        }
                        else
                        {
                            b = false;
                        }
                    }
                    else if (s[i] == ']')
                    {
                        if (st.top() == '[')
                        {
                            st.pop();
                        }
                        else
                        {
                            b = false;
                        }
                    }
                }
            }
        }
        if (!st.empty())
        {
            b = false;
        }

        return b;
    }
};

int main()
{
    int t;
    cin >> t;
    Solution sol;
    while (t--)
    {
        string s;
        cin >> s;
        if (sol.isValid(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}