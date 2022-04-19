#include <bits/stdc++.h>

using namespace std;


/* 
||¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶||
||¶¶__________________________________¶¶||
||¶¶__________________________________¶¶||
||¶¶_________________________________¶¶_||
||¶¶_________________________________¶¶_||
||_¶¶_______________________________¶¶__||
||_¶¶______________________________¶¶___||
||__¶¶¶__________________________¶¶¶____||
||___¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶_____||
||_____¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶_______||
||_______¶¶¶¶_¶¶¶¶¶¶¶¶¶¶¶¶_¶¶¶¶_________||
||_________¶¶¶¶¶_¶¶¶¶¶¶¶_¶¶¶¶___________||
||____________¶¶¶¶_¶¶¶_¶¶¶______________||
||______________¶¶¶_¶_¶¶________________||
||_______________¶¶¶_¶¶_________________||
||________________¶¶_¶¶_________________||
||________________¶¶_¶__________________||
||________________¶¶_¶¶_________________||
||______________¶¶¶_¶_¶¶¶_______________||
||___________¶¶¶¶¶__¶__¶¶¶¶¶____________||
||________¶¶¶¶¶_____¶_____¶¶¶¶__________||
||______¶¶¶¶________¶_______¶¶¶¶¶_______||
||_____¶¶¶__________¶__________¶¶¶¶_____||
||___¶¶¶____________¶____________¶¶¶____||
||__¶¶¶_____________¶______________¶¶___||
||_¶¶¶______________¶_______________¶¶__||
||_¶¶_______________¶________________¶¶_||
||¶¶_______________¶¶¶________________¶¶||
||¶¶______________¶¶¶¶¶_______________¶_||
||¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶||
||¶¶_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_¶¶||
||¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶||
			GG: faster pliiz																		
*/

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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int counter = 0;
        int i;
        if (b == 0 || a == 0)
            cout << (n * a) + b << nline;
        else if (b > 0 && a < 0 || (b < 0 && a < 0))
            cout << n * ((a * 1) + b) << nline;
        else if (a > 0 && b < 0)
        {
            rep(i, 0, n)
            {
                if (s[i] == '0')
                    counter++;
                    
            }
            if ((counter - n )!= 0)
                cout << ((counter * a) + b) + (((n - counter) * a) + b) << nline;
                else if(counter == 0)
                    cout <<  (((n - counter) * a) + b) << nline;
                
                else cout << ((counter * a) + b)<<nline;
        }
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

// #include <bits/stdc++.h>

// using namespace std;

// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define rep(i, a, b) for (i = a; i < b; ++i)
// #define repr(i, a, b) for (i = a; i >= b; --i)
// #define nline "\n"

// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;

// //1.DP se soch
// //2.DP se soch
// //3.DP se soch
// //graph, gcd, BS, seive
// //if NOTA,then
// //brute force hi optimal h

// void solve()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,a,b;
//         cin>>n>>a>>b;
//         string s;
//         cin>>s;
//         int counter0 = 0;
//         int counter1 = 0;
//         rep(i,0,n){
//             if(s[i]=='0'){
//                 counter0++;
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }
