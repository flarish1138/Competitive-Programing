#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n % 2 == 0)
    {
        long long int x = n / 2;
        long long int xE = x * (x + 1);
        long long int xO = x*x;
        cout << xE - xO << endl;
    }
    else if (n % 2 == 1)
    {
        long long int yEve = n / 2;
        long long int yOdd = n - yEve;
        long long int yE = yEve * (yEve + 1);
        // long long int yO = 2 * (yOdd * (yOdd - 1));
        long long int yO = yOdd *yOdd;
        // cout<<yEve<<" "<<yOdd<<" "<<yE<<" "<<yO<<endl;
        cout << yE - yO << endl;
    }
    return 0;
}