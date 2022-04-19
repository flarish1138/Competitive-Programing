#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    // sort(a,a+n);
    // for(int i =0;i<k;i++){
    //     for(int j =0;j<n;j++){
    //         if(a[j]<=5){
    //         a[j]++;
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    // }
    // int count =0;
    // for(int i =0;i<n;i++){
    //     if(a[i]<=5){
    //         count++;
    //     }
    // }

    int count =0;
    for(int i =0;i<n;i++){
        if(5-a[i]>=k){
            count++;
        }
    }

    cout<<(count)/3<<endl;

    return 0;
}