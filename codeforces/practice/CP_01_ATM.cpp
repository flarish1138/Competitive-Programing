#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main(){
    ll X;
    cin>>X;
    double Y;
    cin>>fixed>>setprecision(2)>>Y;

    double leftAmount;
    leftAmount = Y - (X +0.50);
    
    if((X+0.50)<=Y && X%5==0){
        cout << fixed << setprecision(2)<<leftAmount<<endl;
    }
    else {
        cout << fixed << setprecision(2)<<Y<<endl;
    }
   
    return 0;
}