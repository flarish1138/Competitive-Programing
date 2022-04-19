#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i =0;i<n;i++)
        cout<< gcd(a[i],2*a[i])<<" ";
        cout<<endl;
    }

    return 0;
}