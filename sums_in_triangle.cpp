#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n] = {0};
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c <= r; c++)
            {
                cin >> arr[r][c];
            }
        }
        for (int r = n - 2; r >= 0; r--)
        {
            for (int c = 0; c <= r; c++)
            {
                arr[r][c] = arr[r][c] + max(arr[r + 1][c], arr[r + 1][c + 1]);
            }
        }
        cout << arr[0][0] << endl;
    }
    return 0;
}