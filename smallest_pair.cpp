#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        int i = 0;
        while (n--)
        {
            cin >> a[i];
            i++;
        }
        sort(a.begin(), a.end());
        cout << (a[0] + a[1]) << endl;
    }
    return 0;
}