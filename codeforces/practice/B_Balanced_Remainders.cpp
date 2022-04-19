#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int b = n / 3;
        int c[3] = {0};
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 3 == 0)
            {
                c[0]++;
            }
            else if (a[i] % 3 == 1)
            {
                c[1]++;
            }
            else
            {
                c[2]++;
            }
        }
        cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;

        int ans = 0;
        
       

        for (int i = 0; i < 2; i++)
        {
            if (c[0] == c[1] == c[2] == b)
            {
                break;
            }
            if (c[0] > b)
            {
                ans += c[0] - b;
                c[1] += c[0] - b;
                c[0] = b;
                
            }
            if (c[1] > b)
            {
                ans += c[1] - b;
                c[2] += c[1] - b;
                c[1] = b;
            }
            if (c[2] > b)
            {
                ans += c[2] - b;
                c[0] += c[2] - b;
                c[2] =  b;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}