#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(i=a;i<b;++i)
#define repr(i,a,b) for(i=a;i>=b;--i)
#define tst() int ttt;cin>>ttt;for(int test=1;test<=ttt;++test)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    tst()
    {
        ll n;
        cin>>n;
        ll a[n];
        int i;
        rep(i,0,n)
        cin>>a[i];
        sort(a,a+n);
        ll mxx = INT_MAX;
        ll count = 1;
        ll mx1 =0;
        rep(i,1,n)
        {
            mxx = min(mxx,abs(a[i]-a[i-1]));
            if(mxx<a[i])
            break;
            count++;

        }
        cout<<count<<"\n";
    }
    return 0;
}