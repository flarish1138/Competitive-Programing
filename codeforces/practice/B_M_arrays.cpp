#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int count =0;
        for(int i =0;i<n;i++){
            for(int j =1;j<n;j++){
                if((a[i]+a[j]) % m == 0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}