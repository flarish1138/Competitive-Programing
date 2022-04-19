#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b;
    int total = 0;
    int mx = INT_MIN; 
    for(int i = 1;i<=n;i++){
        cin>>a>>b;
        total = total-a+b;
        mx = max(mx,total);
    }
    cout<<mx<<endl;
    return 0;
}