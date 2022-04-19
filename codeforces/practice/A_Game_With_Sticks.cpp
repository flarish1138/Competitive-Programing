#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int sticks = n+m;
    int insertionPoint = n*m;
    int count =0;
    while(insertionPoint>0){
        sticks -= 2;
        insertionPoint -= m + (n-1);
        n = n - 1;
        m = m - 1;
        count++; 
    }
    if(count % 2 == 0){
        cout<<"Malvika"<<endl;
    }
    else {
        cout<<"Akshat"<<endl;
    }
    // cout<<count<<endl;



    return 0;
}