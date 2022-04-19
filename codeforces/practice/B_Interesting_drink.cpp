#include <bits/stdc++.h>
#define ll long long int
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define tst()   \
    int ttt;    \
    cin >> ttt; \
    for (int test = 1; test <= ttt; ++test)

using namespace std;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

// ll binary_Search(ll a[],ll n,ll x){
//     ll low = 0;
//     ll high = n-1;
//     ll count = -1;
//     while(low<=high){
//         ll mid = (low+high)/2;
//         if(a[mid]==x) return mid;
//         else if(a[mid]>x) high = mid -1;
//         else if(a[mid]<x) { count++; low = mid + 1 ;}
//     }
//     return count;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    ll n, q, i, m;
    cin >> n;
    vector<ll> v(n);

    rep(i, 0, n)
    cin >>v[i];

    sort(v.begin(), v.end());

    cin >> q;

    while (q--)
    {
        cin >> m;
        cout << upper_bound(v.begin(), v.end(), m) - v.begin() << "\n";
    }
    return 0;
}