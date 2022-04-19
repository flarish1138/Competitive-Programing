#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int sum = 0;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            sum = sum + x * j;
            if (sum % t == 0)
            {
                x = x * 10;
                continue;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}