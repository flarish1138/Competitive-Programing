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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int n;
    cin >> n;
    ll a[110];
     for (int i =0;i<n;i++)
    cin >>a[i];
    bool swapped = false;
    for (int i =0;i<n-1;i++)
    {
        for(int j = 0;j<n-1-i;j++)
        {
            //    swaped = false;
            if (a[j] > a[j + 1])
            {
                //    swapped = true;
                swap(a[j], a[j + 1]);
                cout << j + 1 << " " << j + 2 << "\n";
            }
        }
        //    if(swapped == false)
        //    break;
    }

    return 0;
}