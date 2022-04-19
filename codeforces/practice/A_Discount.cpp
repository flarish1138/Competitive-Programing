#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    long double percentage;

    percentage = (double)a - (double)b;
    long double disc = (percentage *100)/a;
    cout<<disc<<endl;
    return 0;
}