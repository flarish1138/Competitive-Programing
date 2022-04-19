#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    bitset<32> ar[m + 10];
    for (int i = 0; i < m + 1; i++)
    {
        int x;
        cin >> x;
        ar[i] = x;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int k_diff = 0;
        for (int j = 0; j < 32; j++)
        {
            if (ar[m][j] != ar[i][j])
            {
                k_diff++;
            }
        }
        if (k_diff<=k)
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}