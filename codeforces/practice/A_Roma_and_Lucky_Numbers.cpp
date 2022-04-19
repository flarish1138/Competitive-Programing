// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     int b = 0;
//     int z = 0;
//     int lucky = 0;
//     for (int i = 0; i < n; i++)
//     {
//         while (a[i] != 0)
//         {
//             z = a[i] % 10;
//             if (z == 7 || z == 4)
//             {
//                 b++;
//             }
//             a[i] = a[i] / 10;
//         }
//         if (b <= k)
//         {
//             lucky++;
//         }
//         b =0;
//     }

//     cout << lucky << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count(0);
    cin >> n >> k;
    string s;
    while (n--)
    {
        int lucky(0);
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                lucky++;
            }
        }
        if (lucky <= k)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
