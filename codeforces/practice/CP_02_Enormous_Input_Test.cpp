#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    long long n , k;
    cin>>n>>k;
    int count =0;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%k==0){
            count ++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}