#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n & (n - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long t;
//     long long n;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         if (n % 2 == 1)
//         {
//             cout << "YES" << endl;
//             break;
//         }
//         else if (n % 2 == 0)
//         {
//             while (n % 2 != 1 || n % 2 != 0)
//             {
//                 n = n / 2;
//             }
//             if (n % 2 == 1)
//             {
//                 cout << "YES" << endl;
//             }
//             else if (n % 2 == 0)

//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }
// return 0;
// }
