#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}
int main()
{
    int l, r;
    cin >> l >> r;
    cout<<gcd(l,r);
    return 0;
}