#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    long long sum[200020];
    long long x;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum[i] = sum[i - 1] + x;
    }
    while (m--)
    {
        cin >> x;
        int index = lower_bound(sum, sum + n, x) - sum;
        cout << index << " " << x - sum[index - 1] << endl;
    }
    return 0;
}