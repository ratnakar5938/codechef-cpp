#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        int result = 1;
        if (d < (a + b + c))
        {
            if (d < (b + c))
            {
                if (d < (b + a))
                {
                    if (d < (c + a))
                    {
                        result = 3;
                    }
                    else
                    {
                        result = 2;
                    }
                }
                else
                {
                    result = 2;
                }
            }
            else
            {
                result = 2;
            }
        }
        else
        {
            if (c < (a + b))
            {
                result = 2;
            }
        }

        cout << result << endl;
    }
    return 0;
}