#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    sum += a;
    while (a >= b)
    {
        a = (a / b);
        sum += a;
    }
    // if( a>1)
    // sum += a/2;
        cout << sum << "\n";

    return 0;
}