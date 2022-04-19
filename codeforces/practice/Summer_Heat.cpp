#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int xa,xb,XA,XB;

    while(t--){
    cin>>xa>>xb>>XA>>XB;
    int A = XA/xa;
    int B = XB/xb;
    cout<<A+B<<endl;
    }
    return 0;
}