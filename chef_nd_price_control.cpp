#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        int i = 0;
        int rev_loss = 0;
        while (n--)
        {
            cin >> a[i];
            i++;
        }
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] > k)
            {
                rev_loss += a[j] - k;
            }
        }
        cout << rev_loss << endl;
    }

    return 0;
}