#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int count = 0;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= s[k - 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}