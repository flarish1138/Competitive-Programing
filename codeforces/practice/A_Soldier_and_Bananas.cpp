#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;
    long long int sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    if(sum>n)
    cout << sum - n << endl;
    else cout<<0<<endl;
    return 0;
}