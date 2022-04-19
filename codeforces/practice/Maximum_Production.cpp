#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t,d,x,y,z;
    cin>>t;
    while(t--){
        cin>>d>>x>>y>>z;
        ll sum1 = x*7;
        ll sum2 = (y*d)+(z*(7-d));
        cout<<max(sum1,sum2)<<"\n";
    }
    return 0;
}
