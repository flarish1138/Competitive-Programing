#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n],b[m];long long int op=LLONG_MAX;
    vector<long long int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        op=min(op,a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    if(n==1)
    {
        for(int i=0;i<m;i++)
            cout<<a[0]+b[i]<<" ";
        return(0);
    }
    for(int i=1;i<n;i++)
    {
        v.push_back(abs(a[i]-a[i-1]));
    }

    long long int g=v[0];
    for(int i=0;i<v.size();i++)
        g=__gcd(g,v[i]);

    for(int i=0;i<m;i++)
    {
            cout<<__gcd(op+b[i],g)<<" ";
    }
}