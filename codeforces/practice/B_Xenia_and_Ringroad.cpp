// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n, m;
//     cin >> n >> m;
//     long long int a;
//     long long int z = 1;
//     long long int count = 0;
//     while (m--)
//     {
//         cin >> a;
//         // for (int i = 1; i <= a; i++)
//         // {
//         //     if (z != a && z != n)
//         //     {
//         //         z = z + 1;      // z = 2,
//         //         count++;        // count = 1
//         //     }
//         //      if (z == a)
//         //     {
//         //         break;
//         //     }
//         //      if (z == n)
//         //     {
//         //         z = 1;
//         //         count++;
//         //         continue;
//         //     }
//         // }

//     cout << count;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int ini = 1;
    long long int ans = 0;
    for(int i =0;i<m;i++){
        long long int x;cin>>x;
        ans += ((x-ini+n)%n);
        ini =x;
    }
    cout<<ans<<endl;
    return 0;
}
