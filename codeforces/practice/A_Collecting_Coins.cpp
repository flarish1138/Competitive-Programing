#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a, b, c, n;
    long long int sum = 0;
    while (t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);

        n -= 2*a[2]-a[1]-a[0];
        if(n<0 || n%3!=0)
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}