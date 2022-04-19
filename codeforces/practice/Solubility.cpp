#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,a,b;
        cin>>x>>a>>b;
        long long  z = (100-x)*(b);
        long long c =a+z;
        cout<<c*10<<endl;
    }
    return 0;
}
