#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q;
        int count = 0;
    while (n--)
    {
        cin >> p >> q;
        if (abs(p - q) >=2)
            count++;
    }
    cout << count << endl;
    return 0;
}