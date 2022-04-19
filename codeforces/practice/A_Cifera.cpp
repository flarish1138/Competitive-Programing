#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, l;
    cin >> k;
    cin >> l;
    long long int count = 0;
    long long int multi = 1;
    // if (k == l)
    // {
    // cout << "YES" << endl;
    // cout << count << endl;
    // return 0;
    // }
    while (multi < l)
    {
        multi = multi * k;
        if (multi == l)
        {
            count++;
            cout << "YES" << endl;
            cout << count-1 << endl;
            return 0;
        }
        count++;
        // cout << k << endl;
    }
    cout << "NO" << endl;
    return 0;
}