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

    ll n;
    cin>>n;
    ll sum = 0;
    ll s[n];
    for(int i =0;i<n;i++)
    cin>>s[i];
    for(int i =0;i<n;i++)
    sum += s[i];

    if(sum>4){
    ll v = sum/4;
    if(sum%4>0)
    v = v+ 1;
    
    cout<<v;
    }
    else cout<<1;
    return 0;
}