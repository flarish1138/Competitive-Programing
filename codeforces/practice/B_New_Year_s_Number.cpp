#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if(n<2020)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int v = n/2020;
        int x = n%2020;
        if(x<=v)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}