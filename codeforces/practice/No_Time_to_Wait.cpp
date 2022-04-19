#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x, t;
    bool yes = false;
    cin >> n >> h >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if((x+t) == h){
            yes = true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(yes == false)
    cout<<"NO"<<endl;

    return 0;
}