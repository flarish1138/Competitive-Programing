#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tl = (k * l)/nl;
    int tc = (c*d);
    int ts = p/np;
    
    // cout<<tl<<endl;
    // cout<<tc<<endl;
    // cout<<p<<endl;
    int mn;
    int mn1;
    mn = min(tl,tc); 
    mn1 = min(mn,ts);

    cout<<mn1/n<<endl;

    return 0;
}