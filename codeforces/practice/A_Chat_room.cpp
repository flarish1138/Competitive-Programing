#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string d = "hello";
    int n = s.length();
    int j = 0;
    int pass = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == d[j])
        {
            j++;
            pass++;
            if (pass == 5)
                break;
        }
    }

    if(pass == 5)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}