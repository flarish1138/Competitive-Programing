#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int count =0;
    for(int i = 2;i<=n;i++){
       long long int result = pow(2,i);
        if((result) % 2 == 0 && result<=n){
            count++;
        }
    }
    cout<<n-count<<endl;
    return 0;
}