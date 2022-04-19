#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    
        if(s[0]>=65 && s[0]<=90)
        cout<<s<<endl;
        else if(s[0]>=97 && s[0]<=122){
            s[0] = s[0] - 32;
            cout<<s<<endl;
        }

    
    return 0;
}
