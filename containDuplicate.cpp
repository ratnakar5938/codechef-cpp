#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        bool b = false;
        vector<int>::iterator i;
        vector<int>::iterator j;
        for (i = nums.begin(); i != nums.end(); i++)
        {
            for (j = i + 1; j != nums.end(); j++)
            {
                if (*i == *j)
                {
                    b = true;
                    break;
                }
            }
            if (b)
            {
                break;
            }
        }
        return b;
    }
};

int main()
{
    vector<int> a = {1, 2, 3, 1};
    Solution Sol;
    // cout << a.size() << endl;
    cout << Sol.containsDuplicate(a) << endl;

    return 0;
}