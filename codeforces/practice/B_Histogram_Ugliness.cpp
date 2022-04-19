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
        ll i;
        ll a[n];
        rep(i,0,n)
        cin>>a[i];
        ll sum = 0;
        sum += a[0]+a[n-1];
        rep(i,0,n-1)
        sum += abs(a[i]-a[i+1]);
        // cout<<sum<<endl;

        ll count = 0;
        rep(i,1,n-1){
            if(a[i]>a[i-1] and a[i]>a[i+1]){
                sum -= abs(max(a[i-1],a[i+1])-a[i]);
                a[i] = max(a[i+1],a[i-1]);
            }
        }

        if(n>1){
            if(a[0]>a[1])
            sum -= abs(a[0]-a[1]);
            if(a[n-1]>a[n-2])
            sum -= abs(a[n-1]-a[n-2]);
        }
        else sum = a[0];
        cout<<sum<<"\n";
    }
    return 0;
}