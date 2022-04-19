#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int j =0;
    int n = t.length();
    for(int i =0;i<n;i++){
        if(t[i] == s[j] ){
            j++;
        }
    }
    cout<<j+1<<endl;
    return 0;
}