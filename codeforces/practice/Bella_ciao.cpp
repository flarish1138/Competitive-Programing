// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int t;
//     cin >> t;
//     long long int D, d, P, Q;

//     while (t--)
//     {
//         cin >> D >> d >> P >> Q;
//         // int v = D/d;
//         long long int sum = d * P;
//         D = D - d;
//         long long int total = 0;
//         int total1 = 0;
//         int j = 1;
//         while (D > 0)
//         {
//             if (D >= d)
//             {
//                 for (int i = 1; i <= d; i++)
//                 {
//                     total += P + j * Q;
//                     // if (D > 1)
//                     // {
//                     //     total1 += total * d;
//                     // }
//                     // else if (D == 1)
//                     // {
//                     //     total1 += total * D;
//                     // }
//                 }
//             }
//             else
//             {
//                 for (int i = 1; i <=D; i++)
//                 {
//                     total += P + j * Q;
//                     // if (D > 1)
//                     // {
//                     //     total1 += total * d;
//                     // }
//                     // else if (D == 1)
//                     // {
//                     //     total1 += total * D;
//                     // }
//                 }
//             }
//             D = D - d;
//             j++;
//         }
//         cout << sum + total << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int t;
//     cin >> t;
//     long long int D, d, P, Q;

//     while (t--)
//     {
//         cin >> D >> d >> P >> Q;
//         // int v = D/d;
//         long long int sum = d * P;
//         D = D - d;
//         long long int x = D / d;
//         long long int y = D % d;
//         long long int total = 0;
//         long long int total1 = 0;
//         long long int total3 = 0;
//         // while (y >= 1)
//         // {
//             // x = D / d;
//             // y = D % d;
//             for (int i = 1; i <= x; i++)
//             {
//                 total += d * (P + (i * Q));
//             }
//             if (y == 1)
//             {
//                 total1 += P + (x + 1) * Q;
//             }
//         // }
//         cout << sum + total + total1 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    long long int D, d, P, Q;

    while (t--)
    {
        cin >> D >> d >> P >> Q;
        // int v = D/d;
        long long int sum = d * P;
        D = D - d;
        long long int total = 0;
        int total1 = 0;
        int j = 1;
        // while (D > 0)
        // {
        //     if (D >= d)
        //     {
        long long int x = D / d;
        long long int y = D - (x * d);
        for (int i = 1; i <= x; i++)
        {
            total +=d*( P + j * Q);
            // if (D > 1)
            // {
            //     total1 += total * d;
            // }
            // else if (D == 1)
            // {
            //     total1 += total * D;
            // }
            j++;
        }
        // }
        // else
        // {
        if (y==1){
            for (int i = 1; i <= y; i++)
            {
                total1 += P + j * Q;
                // if (D > 1)
                // {
                //     total1 += total * d;
                // }
                // else if (D == 1)
                // {
                //     total1 += total * D;
                // }
            }
        }
        
        // }
        cout << sum + total + total1 << endl;
    }
    return 0;
}
