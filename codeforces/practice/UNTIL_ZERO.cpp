#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    long long int p, q;
    long long int mx;
    long long int mn;
    while (t--)
    {
        cin >> p >> q;
        mx = max(p, q);
        mn = min(p, q);
        int count = 0;
        while (mx != 0)
        {
            int result = 0;
            result = mx - mn;
            mx = max(result,mn);
            count++;

        }
        cout<<count<<endl;
    }

    return 0;
}