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
        cin >> n;
        string s;
        cin >> s;
        string temp1 = "";
        string temp2 = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                {
                    temp1 += 'B';
                }
                else if (i != 0)
                {
                    if (temp1[i - 1] == 'R')
                    {
                        temp1 += 'B';
                    }
                    else
                    {
                        temp1 += 'R';
                    }
                }
            }
            else temp1+=s[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                {
                    temp2 += 'R';
                }
                else if (i != 0)
                {
                    if (temp2[i - 1] == 'B')
                    {
                        temp2 += 'R';
                    }
                    else
                    {
                        temp2 += 'B';
                    }
                }
            }
            else temp2+=s[i];
        }
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i =0;i<n-1;i++){
            if(temp1[i]==temp1[i+1])
            cnt1++;
        }
        for(int i =0;i<n-1;i++){
            if(temp2[i]==temp2[i+1])
            cnt2++;
        }
        if(cnt1>cnt2)
        cout<<temp2;
        else cout<<temp1;
        cout<<nline;
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
