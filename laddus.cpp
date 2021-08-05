#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

ll solve()
{
    ll act;
    string origin;

    cin >> act >> origin;

    ll laddus = 0;

    while (act--)
    {

        string s;
        cin >> s;

        if (s == "CONTEST_WON")
        {
            ll rank;
            cin >> rank;

            if (rank < 20)
                laddus = laddus + 300 + (20 - rank);
            else
                laddus = laddus + 300;
        }
        else if (s == "TOP_CONTRIBUTOR")
        {
            laddus = laddus + 300;
        }
        else if (s == "BUG_FOUND")
        {
            ll sev;
            cin >> sev;
            laddus = laddus + sev;
        }
        else if (s == "CONTEST_HOSTED")
        {
            laddus = laddus + 50;
        }
    }

    return (origin == "INDIAN") ? laddus / 200 : laddus / 400;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}