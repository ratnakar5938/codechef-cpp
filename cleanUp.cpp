#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    int n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<int> job(n);
        vector<int> job_done;
        for (int i = 0; i < n; i++)
        {
            job[i] = i + 1;
        }
        while (m--)
        {
            int x;
            cin >> x;
            job_done.push_back(x);
        }
        sort(job_done.begin(), job_done.end());
        vector<int>::iterator it;
        for (int i = 0; i < job_done.size(); i++)
        {
            int k = job_done[i];
            it = job.begin() + (k - i - 1);
            job.erase(it);
        }
        for (int i = 0; i < job.size(); i += 2)
        {
            cout << job[i] << " ";
        }
        cout << endl;
        for (int i = 1; i < job.size(); i += 2)
        {
            cout << job[i] << " ";
        }
        cout << endl;
    }
    return 0;
}