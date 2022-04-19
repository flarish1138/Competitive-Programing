#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a,odd =0;;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if(a%2==1){
                odd++;
            }
        }

        if(odd == 0 || (x==n && odd%2 == 0) || (odd==n && x%2==0)){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        
    }
    return 0;
}