// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a >> b;
//         long long int m = 0;
//         long long int s = 0;
//         long long int x = 0;
//         long long int c = 1;
//         long long int y = 0;
//         long long int z = 0;
//         long long int v;
//         m = abs(a - b);
//         s = abs(a + b);
//         x = a * m;
//         c = a * s;
//         y = x + c;
//         z = x + y;
//         v = a * b;

//         // if (x / a && y / a && z / (a * b))
//         if ((x % a) == 0 || (y % a) == 0 || (z % a) == 0|| (x % v) || (y% v) || (z % v))
//         {
//             cout << "YES" << endl;
//             cout << x << " " << y << " " << z << " " << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a, b;
    long long int x = 0, y = 0, z = 0;
    while (t--)
    {
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        x = a;
        y = a * b;
        z = x + y;

        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
