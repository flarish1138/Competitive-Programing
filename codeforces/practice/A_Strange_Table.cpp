#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, x;
        cin >> n >> m >> x;
        x--;
        long long col = x / n;
        long long row = x % n;
        cout<< row * m + col + 1<<endl;
    }
    return 0;
}