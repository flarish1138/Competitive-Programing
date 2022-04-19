#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;
    long long int d;
    string s;
    long long int count = 0;
    while (n--)
    {
        cin >> s >> d;
        if (s == "+")
        {
            x += d;
        }
        if (s == "-")
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<x<<" "<<count<<endl;
    return 0;
}