#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x;
    while (t--)
    {
        cin >> x;
        long long int v = x;
        long long int z = 0;
        long long int y;
        long long int count = 0;
        if (x < 10)
            cout << x << endl;
        else
        {
            i = 9;
            while (x > 9)
            {
                x = x - i;
                z = z + i;
                count++;
            }
            z = z + x;
            if (z == v)
            {
                cout<<x;
                for (int i = 1; i <= count; i++)
                {
                    cout<<9;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}