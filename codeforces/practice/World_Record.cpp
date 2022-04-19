#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> setprecision(2) >> v;

        float x = k1 * k2 * k3 * v;
        float w = (100/x);

        w =round(w*100);
        w = w/100;
        float z = 9.58;

        

        // cout<<w<<endl;
        // cout<<x<<endl;
        if(w<z)
            cout << "YES" << endl;
        else
            if(w>=z)
            cout << "NO" << endl;
    }
    return 0;
}