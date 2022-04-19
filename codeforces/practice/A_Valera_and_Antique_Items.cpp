#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, v;
    cin >> n >> v;
    long long int k;
    vector<long long> q(n);
    long long int p = 0;
    long long int j = 0;
    long long int mn = LONG_LONG_MAX;
    for (int l = 1; l <= n; l++)
    {
        cin >> k;
        vector<long long> s(k);
        for (int i = 0; i < k; i++)
        {
            s.push_back(i);
        }
        // sort(s, s + k);
        // for (int i = 0; i < k; i++)
        // {
        //     cout<<s[i]<<endl;;
        // }

        for (int i = 0; i < k; i++)
        {
        //     // if (v>s[i])
        //     // {
        //     //     p++;
        //     //     // v = v - s[i];
        //     //     q[j] = k;
        //     //     j++;
        //     //     break;
        //     // }

            mn = min(mn, s[i]);
        }
        cout<<mn<<endl;
        for (int i = 0; i < k; i++)
        {
            if (v > mn)
            {
                p++;
                q[j] = l;
                j++;
                break;
            }
        }
    }
    cout << p << endl;
    // if (p > 0)
    // {
    //     for (int i = 0; i < p; i++)
    //     {
    //         cout << q[i] << " ";
    //     }
    // }
    return 0;
}