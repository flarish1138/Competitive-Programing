#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int j = 97;
    int v = 0;
    char  s[110];
    for(int i =0;i<k;i++){
        s[i] = j;
        j++;
    }
    int d = n -k;
    if(n>k)
    {
       for(int i =k;i<k+d;i++){
           s[i] = s[v];
           v++;
       }
    }
    for(int i =0;i<n;i++){
        cout<<s[i];
    }

    
    return 0;
}