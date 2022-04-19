#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    int i;
    while (t--)
    {
        cin >> n >> k;
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());

        for (i = 0; i < n; i++)
        {
            if (k > 0)
            {
                if (a[i] < b[i])
                {
                    a[i] = b[i];
                    k--;
                }
            }
        }
        
        int sum =0;
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}