// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m - 1; j++)
//         {
//             if (i % 2 != 0)
//             {

//                 cout << "#";
//             }
//             else
//             {
//                 cout << ".";
//             }
//         }
//         cout << "#" << endl;
//         // for (int k = 1; k <= m - 1; k++)
//         // {
//         //     cout << ".";
//         // }
//         // cout << "#" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << "#";
    }
    cout << endl;

    for (int i = 1; i <= n/2; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j < m; j++)
            {
                cout << ".";
            }
            cout << "#" << endl;
            for (int i = 1; i <= m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else{

            cout << "#";
            for (int j = 2; j <= m; j++)
            {
                cout << ".";
            }
            cout<<endl;
            for (int i = 1; i <= m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }

    return 0;
}
