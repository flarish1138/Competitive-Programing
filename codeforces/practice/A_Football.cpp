#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count0 = 0;
    int count1 = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            count0++;
        else 
        {
            mx = max(mx,count0);
            count0 = 0;
        }
    }
    // cout<<mx<<endl;
    if(mx+1>=7)
    cout << "YES"<<endl;

    else if(mx+1<7) cout<<"NO"<<endl;

        return 0;
}