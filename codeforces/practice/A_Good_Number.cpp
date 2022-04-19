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
   int n, k;
	cin >> n >> k;
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		map<char, int> m;
		for(auto &it:s)
			m[it]++;
		int cnt = 0;
		for(auto &it:m)
			if(it.first - '0' <= k)
				cnt++;
		ans += (cnt == k + 1);
	}
	cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
