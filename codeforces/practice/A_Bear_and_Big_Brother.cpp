#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (true)
    {
        if (a > b)
        {
            cout << count << endl;
            break;
        }
        a *= 3;
        b *= 2;
        count++;
        // cout << a << " " << b << " " << count << endl;
    }
    return 0;
}