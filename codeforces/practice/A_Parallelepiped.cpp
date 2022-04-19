#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    // if(a==b==c){
    //     cout<<4*(a+b+c)<<endl;
    //     return 0;
    // }
    // a = 12/a;
    // b = 12/b;
    // c = 12/c;
    // cout<<4*(a+b+c)<<endl;
     
     int x = sqrt((a*c)/b);
     int y = sqrt((a*b)/c);
     int z = sqrt((b*c)/a);

     cout<<4*(x+y+z)<<endl;
    
    return 0;
}