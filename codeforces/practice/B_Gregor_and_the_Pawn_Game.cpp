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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string enemy, player;
        cin>>enemy>>player;
        int cnt  = 0;
        for(int i  = 0;i<n;i++){
            if(enemy[i]=='0' and player[i]=='1'){
                cnt++;
                player[i] = '0';
            }
            else if(enemy[i]=='1'){
                if(i-1>=0 and player[i-1]=='1'){
                    player[i-1]='0';
                    cnt++;
                } 
                else if(i+1<n and player[i+1]=='1'){
                    player[i+1]='0';
                    cnt++;
                } 
            }
        }
        cout<<cnt<<nline;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
