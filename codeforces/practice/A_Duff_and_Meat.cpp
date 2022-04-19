// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int a[n];
//     long long int p[n];
//     long long int sum = 0;
//     long long int mn = INT_MAX;
//     long long int cost = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i] >> p[i];
//         sum += a[i];
//         mn = min(mn, p[i]);
//     }
//     // cout<<sum<<"\n";
//     for (int i = 1; i <= n; i++)
//     {
//         if (p[i] == mn)
//         {
//             cost += sum * p[i];
//             cout << cost << "\n";
//             break;
//         }
//         else
//         {
//             sum -= a[i];
//             cost += a[i] * p[i];
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, p;
    int sum = 0;
    int mn = INT_MAX;
    while (n--)
    {
        cin >> a >> p;
        mn = min(mn, p);
        sum += a * mn;
    }
    cout << sum;
    return 0;
}