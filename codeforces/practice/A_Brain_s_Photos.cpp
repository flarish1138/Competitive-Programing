#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,cnt=0;
    cin>>n>>m;
    char s[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>s[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='C'||s[i][j]=='M'||s[i][j]=='Y'){
               cout<<"#Color"<<endl;
               return 0;
            }
        }
    }

    cout<<"#Black&White"<<endl;
    return 0;
}