#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int a;
    int sum =0;
    while(n--){
        cin>>a;
        if(a>h){
            sum += 2;
        }
        else{
            sum+=1;
        }
    }
    cout<<sum<<endl;
    return 0;
}