#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    char str1[100] ,str2[200];
    cin>>str1;
    cin>>str2;
    
    for(int i=0;i<strlen(str1);i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    cout<<strcmp(str1,str2)<<endl;

   
    return 0;
}