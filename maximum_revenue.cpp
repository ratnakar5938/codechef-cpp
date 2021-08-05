#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long get_max_revenue(vector<long long> a)
{
    int n = a.size();
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, a[n - i - 1] * (i + 1));
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    vector<long long> a;
    while (t--)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    cout << get_max_revenue(a) << endl;
    return 0;
}