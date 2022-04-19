#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x;
    cin>>x;
    long long int v = x;
    long long int i =1;
    long long int z  = pow(2,i);
    while(x-z>=0){
        x = x-z;
        i++;
        z  = pow(2,i);
    }
    cout<<x+1<<endl;


    return 0;
}