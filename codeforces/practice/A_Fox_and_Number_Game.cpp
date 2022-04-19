// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[110];
//     int sum = 0;
//     bool flag = true;
//     int mx = INT_MIN;
//     int mn = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         mx=max(mx,a[i]);
//         mn=min(mn,a[i]);
//     }
//     //    int  j =1;
//     // sort(a, a + n);
//     while(mx>mn){
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (a[i] > a[i + 1])
//         {
//             a[i] = a[i] - a[i - 1];
//         }
//         else if (a[i] < a[i + 1])
//         {
//             a[i + 1] = a[i + 1] - a[i];
//         }
//         else if (a[i] == a[i + 1])
//         {
//             continue;
//         }
//     }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     cout << sum;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int a[111];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (true)
    {
        for (int i = n - 1; i >= 1; i--)
            if (a[i] > a[i - 1])
                a[i] = a[i] - a[i - 1];
        sort(a, a + n);
        if (a[0] == a[n - 1])
        {
            printf("%d\n", n * a[0]);
            break;
        }
    }
    return 0;
}
