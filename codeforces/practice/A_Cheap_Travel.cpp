#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    double n, m, a, b;
    long long int mn = LONG_LONG_MIN;
    cin >> n >> m >> a >> b;
    double c, d, e;
    if(n==1){
        mn = min(a,b);
        cout<<mn<<endl;
    }
    else
    if (n == 1000 )
    {
        c = ceil(b / m);

        e = (c * n);
        d = (a * n);
        mn = min(d, e);
        cout << mn << endl;
    }
    else
    {

        // cout<<c<<endl;
        c = (b * n);

        e = ceil(c / m);
        // cout<<e<<endl;
        d = (a * n);
        mn = min(d, e);
        cout << mn << endl;
    }
    return 0;
}