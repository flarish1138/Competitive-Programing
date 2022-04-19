#include<bits/stdc++.h>
using namespace std;

int main(){
    int m =0,n =0;
    int count = 0;
    int a[10][10];
    for(int i =1;i<=5;i++){
        for(int j = 1;j<=5; j++){
        cin>>a[i][j];
        if(a[i][j] == 1){
            m =i;
            n =j;
        }
        }
    }
    while(m != 3 || n != 3){
    if(m<3){
        m++;
        count++;
    }
    if(m>3){
        m--;
        count++;
    }
    if(n<3){
        n++;
        count++;
    }
    if(n>3){
        n--;
        count++;
    }
    }
    cout<<count<<endl;
    return 0;
}