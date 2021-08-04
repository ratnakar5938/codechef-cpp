#include <iostream>
#include <stack>

using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<int> a;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    while (!a.empty())
    {
        int x = a.top();
        a.pop();
        cout << x << " ";
    }

    cout << endl;

    return 0;
}