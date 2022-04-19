#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int v = k;
    int count = 1;
    while (true)
    {
        int x = k - r;
        if (k % 10 == 0)
        {
            // count++;
            break;
        }
        else if (x % 10 == 0)
        {
            // count++;
            break;
        }
        else {
            count++;
            k = count*v;
        }

    }
    cout<<count<<endl;
    return 0;
}