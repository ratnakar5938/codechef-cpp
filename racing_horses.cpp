#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    int diff = 0;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        int i = 0;
        while (i < n)
        {
            cin >> a[i];
            i++;
        }
        if (a[1] > a[0])
        {
            diff = a[1] - a[0];
        }
        else
        {
            diff = a[0] - a[1];
        }
        for (int j = 0; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                if (a[k] > a[j])
                {
                    if (diff > a[k] - a[j])
                    {
                        diff = a[k] - a[j];
                    }
                }
                else
                {
                    if (diff > a[j] - a[k])
                    {
                        diff = a[j] - a[k];
                    }
                }
            }
        }
        cout << diff << endl;
    }
    return 0;
}