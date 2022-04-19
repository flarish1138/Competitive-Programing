#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define rep(i, a, b) for (i = a; i < b; ++i)
#define repr(i, a, b) for (i = a; i >= b; --i)
#define endl "\n"

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
    int a,b;
    cin>>a>>b;
    int count =0;
    if(a==1 && b==1)
    {
        cout<<0;
        return;
    }
    while(a>0 && b>0){
        if(a>b){
            a -=2;
            b +=1;
            // cout<<a<<" "<<b<<endl;
            count++;
        }
        else {
           b -=2;
            a +=1;
            //  cout<<a<<" "<<b<<endl;
            count++; 
        }
    }
    cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
