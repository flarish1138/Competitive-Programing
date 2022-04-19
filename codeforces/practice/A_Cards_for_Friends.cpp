#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        long long int count = 1;
        long long int count1 = 1;
        long long n;
        cin >> w >> h >> n;
        // while (w > 1 || h > 1)
        // {
        // if (w % 2 == 0 && h % 2 == 0)
        // {
        //     while(w%2!=1){
        //     int res = (w*h) / 2;
        //     count += 2;
        //     }
        //      while(h%2!=1){
        //     h /= 2;
        //     count += 2;
        //     }
        //     if (count >= n)
        //     {
        //         cout << "YES" << endl;
        //         continue;
        //     }
        // }
        if (w % 2 == 1 && h % 2 == 1 && count1 >= n)
        {
            cout << "YES" << endl;
            continue;
        }
        if (w % 2 == 0)
        {
              while(w%2!=1){
            w /= 2;
            count *= 2;
            }
            if ((count) >= n)
            {
                cout << "YES" << endl;
                continue;
            }
        }
         if (h % 2 == 0)
        {   
             while(h%2!=1){
            h /= 2;
            count *= 2 ;
            }
            if ((count) >= n)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        // }
        cout << "NO" << endl;
    }
    return 0;
}