#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        for (int i = 2; i < 30; ++i)
        {
            long long int z = (pow(2, i) - 1);
            if(n%z == 0){
                cout<<n/z<<endl;
                break;
            }
        }

        // long long int x = n / (pow(2, i) - 1);

        // cout << x << endl;
    }
    return 0;
}