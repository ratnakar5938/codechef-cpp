#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m, k;
    while (t--)
    {
        vector<int> arr;
        cin >> n >> m >> k;
        int z = n;
        int res = 0;
        while (n--)
        {
            int y;
            cin >> y;
            arr.push_back(y);
        }
        for (int it = 0; it < arr.size(); it++)
        {
            if (arr[it] == 1)
            {
                res++;
            }
            else
            {
                break;
            }
        }

        if (res == z)
        {
            cout << 100 << endl;
        }
        else if (res >= m)
        {
            cout << k << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}