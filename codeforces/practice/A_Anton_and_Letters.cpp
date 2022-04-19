#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1001];
    gets(s);
    int len , count = 0;
    len = strlen(s);
    sort(s,s+len);
    for(int i =1;i<len-1;i++){
        if(s[i]>=97 && s[i]<=122){
            count++;
            if(s[i] == s[i+1])
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}