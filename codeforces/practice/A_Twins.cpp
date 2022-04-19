#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        sum +=a[i];
    }
    // cout<<sum;
    int sum1 = 0;
    sort(a,a+n, greater<int>());
    for(int i =0;i<n;i++){
        sum1 +=a[i]; 
        if((sum1) > (sum>>1)){
            cout<<i+1;
            break;
            }
    }
    return 0;
}