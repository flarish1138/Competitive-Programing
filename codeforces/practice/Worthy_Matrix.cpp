#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        //     long long n, m, k;
        //     cin >> n >> m >> k;
        //     long long a[n][m];
        //     for (int i = 0; i < n; i++)
        //     {
        //         for (int j = 0; j < m; j++)
        //         {
        //             cin >> a[i][j];
        //             if (a[i][j] >= k)
        //             {
        //                 count++;
        //             }
        //         }
        //     }
        //     // cout<<count<<endl;
        //     // int sum = 0;
        //     // int start_row = 0;
        //     // int end_row = start_row + 1;
        //     // int start_col = 0;
        //     // int end_col = start_col + 1;
        //     // for(int i = start_row;i<=end_row;i++){
        //     //     for(int j =start_col;j<=end_col;j++){
        //     //         sum += a[i][j];
        //     //     }
        //     // }

        //     // int b[2][2] = {0};
        //     int i, j;
        //     int sum = 0;
        //     int avg = 0;
        //     int count1 = 0;
        //     for (i = 0; i < n; i++)
        //     {

        //         avg = sum / 4;
        //         if (avg >= k)
        //         {
        //             count1++;
        //         }
        //         cout<<sum<<endl;
        //         cout << count1 << endl;
        //     }

        //     //  = a[0][0]  = a[0][2]  = a[1][0] = a[1][1]
        // }

        long long int n, m, k;
        cin >> n >> m >> k;
        long long int a[n * m] = {0};
        long long int count1 = 0;
        // int sum = 0;
        long long int sum1 = 0;
        for (int i = 1; i <= m * n; i++)
        {
            cin >> a[i];
            if (a[i] >= k)
            {
                count1++;
            }
            sum1 += a[i];
        }
        // cout << count1 << endl;

        // long long int b[(m * n) + 4];
        for (int i = 1; i < n * m; i++)
        {
            // b[i] = sum + a[i];
            // sum += a[i];
            if (i % m == 0)
            {
                continue;
            }
            a[i] += a[i + 1];
            // cout << a[i] << endl;
        }
        // cout<<sum1<<endl;

        for (int i = 1; i < (n * m); i++)
        {
            long long int z = a[i] +a[(m-1) + i];
            long long int avg = z/4;
            if(avg>=k){
                count1++ ;
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}