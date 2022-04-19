#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mn = min(a,min(b,c));
    int sum = 0;
    sum = a+b+c;
    cout<<sum-mn<<"\n";
    return 0;
}