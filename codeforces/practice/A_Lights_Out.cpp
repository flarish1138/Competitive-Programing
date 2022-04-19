#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3];
    // int b[3][3];
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            if(a[i][j] !=0 && (a[i][j]) % 2 == 0){
                a[i][j] = 1;
            }
            else  if((a[i][j]) % 2 !=0){
                a[i][j] = 0;
            }
        }
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}