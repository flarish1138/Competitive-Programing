#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y, x1, y1, d;
    int count = 0;
    while (t--)
    {
        cin >> x >> y >> x1 >> y1 >> d;
        int z = x/x1;
        int m = y/y1;
        int mn = min(z,m);
        if(mn>= d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}