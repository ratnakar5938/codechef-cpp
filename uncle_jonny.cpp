#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int search(vector<long long> vec, int a)
{
    sort(vec.begin(), vec.end());
    int low, high, mid;
    low = 0;
    high = vec.size() - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (vec[mid] == a)
        {
            return mid + 1;
        }
        else if (vec[mid] > a)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n;
        vector<long long> a(n);
        int i = 0;
        while (i < n)
        {
            cin >> a[i];
            i++;
        }
        cin >> k;
        long long val = a[k - 1];
        cout << search(a, val) << endl;
    }

    return 0;
}