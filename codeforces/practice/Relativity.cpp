#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t,c,g;
    cin>>t;
    while(t--){
        cin>>g>>c;
        ll v = c*c;
        ll d = 2*g;
        ll H = v/d;
        cout<<H<<"\n";
    }
    return 0;
}