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
    long N,A[100009];
    cin>>N;
    for(long i=0;i<N;i++)
    	cin>>A[i];
   	long M=2,C=2,i=2;
   	while(i<N)
   	{
   		if(A[i]==(A[i-1]+A[i-2])){
   			C++;
   			i++;
   			//cout<<A[i]<<"\n";
   		}
   		else
   		{
   			//cout<<A[i]<<"\n";
   			M=max(M,C);
   			C=2;
   			i++;
   		}
   	}
   	if(N==1)
   		cout<<1;
   	else
   		cout<<max(M,C);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
