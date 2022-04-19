#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    
    long long int count1 = 0;
    long long int count0 = 0;
    for (int  i = 0; i < n; i++)
    {
        if(s[i]=='1')
        count1++;
        else count0++;
    }
    cout<<abs(count1-count0)<<endl;
    
    return 0;
}