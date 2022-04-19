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
#define SIZE 26

//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void printCharWithFreq(string str)
{
    int n = str.size();
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        int red = 0;
        int green = 0;
        int freq[SIZE];
        // if (str.size() % 2 == 0)
        // {
        //     cout << str.size() / 2 << endl;
        //     continue;
        // }
        memset(freq, 0, sizeof(freq));

        for (int i = 0; i < n; i++)
            freq[str[i] - 'a']++;

        // if (n % 2 != 0)
        // {
        //     for (int i = 0; i < n; i++)
        //     {

        //         if (freq[str[i] - 'a'] != 0)
        //         {
        //             if (freq[str[i] - 'a'] == 2)
        //             {
        //                 red++;
        //                 white++;
        //             }
        //             else if (freq[str[i] - 'a'] == 1)
        //                 red++;
        //             else if (freq[str[i] - 'a'] > 2)
        //                 red += 1;
        //             freq[str[i] - 'a'] = 0;
        //         }
        //     }
        //     cout << red << endl;
        // }
        int i;
        rep(i, 0, SIZE)
        {
            if (freq[i] > 1)
            {
                red++;
                green++;
                freq[i] = 0;
            }
            else if (freq[i] == 1)
            {
                if (red > green)
                {
                    green++;
                }
                else if (green > red)
                {
                    red++;
                }
                else
                {
                    red++;
                }
            }
        }
        cout << (red + green) / 2 << endl;
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
