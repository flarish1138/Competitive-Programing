#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    char str = '.';
    transform(s.begin(),s.end(),s.begin(), ::tolower);   
    // cout<<s<<endl; 
    for(int i =0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e'||s[i] == 'i' || s[i] == 'o'||s[i] == 'u' || s[i] == 'y'){
            cout<<"";
        }
        else{
            cout<<"."<<s[i];
        } 
    }
    return 0;
}