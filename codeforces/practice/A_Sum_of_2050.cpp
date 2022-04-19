#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    long long n;
    long long m;
    while (t--)
    {
        cin >> n;
        long long sum = 0;
        if (n < 2050 || n % 2050 != 0)
        {
            cout << -1 << endl;
            m = 0;
            continue;
        }
        else if (n % 2050 == 0)
        {
            n = n / 2050;
        }
        while (n != 0)
        {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}