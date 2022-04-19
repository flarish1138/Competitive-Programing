#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c,d,a, b;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else if (n < 0)
    {
        a = n / 10; // last digit removed
        b = n % 10; // larst digit removed number
        c = a % 10; // second last digit
        d = (a - c) + b; 
        
        // cout<<a<<endl;
        // cout<<b<<endl;
        cout << max(a, d);
    }
    return 0;
}