#include <iostream>

using namespace std;

long long sumN(long long n)
{
    long long sum = (n * (n + 1)) / 2;

    return sum;
}

int main()
{
    long long n;
    cin >> n;
    cout << sumN(n) << endl;

    return 0;
}