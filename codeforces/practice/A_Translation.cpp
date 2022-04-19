#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.length();
    // char d[n];
    int j = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if(t[j] == s[i]){
        j++;
        count++;
        }
        // cout<<d[i];
    }
    if(count==n)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}