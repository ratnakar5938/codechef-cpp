#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        bool b = false;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    b = true;
                    break;
                }
            }
            if (b)
            {
                break;
            }
        }
        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        vector<int> nums(n);
        int i = 0;
        while (n--)
        {
            cin >> nums[i];
            i++;
        }
        Solution sol;
        vector<int> result = sol.twoSum(nums, target);
        for (auto j : result)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}