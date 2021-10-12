#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        vector<int> arr;

        int x;
        cin >> x;
        int z = 0;
        while (n--)
        {
            z = x / pow(10, n);
            x -= z * pow(10, n);
            arr.push_back(z);
        }

        int res = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] > arr[i])
                {
                    if ((j - i) == (arr[j] - arr[i]))
                        res++;
                }
                else
                {
                    if ((j - i) == (arr[i] - arr[j]))
                        res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}