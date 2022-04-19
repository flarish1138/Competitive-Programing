#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define nline "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void solve()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    long long arr[2000];
    for(int i= 0;i<str1.size();i++)
    arr[str1[i]]++;
    for(int i= 0;i<str2.size();i++)
    arr[str2[i]]--;
    for(int i = 0;i<255;i++)
    if(arr[i]<0 and i!=' ') {cout<<"NO";return;}
    cout<<"YES";
    cin.get();cin.get();

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
