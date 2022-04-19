#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<long long int> a(1e6 + 1);
vector<long long int> b(1e6 + 1);
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i =0;
        int j = n-1;
        if(n==1){cout<<a[i]<<endl;continue;}
        while(i<j){
            cout<<a[i]<<" "<<a[j]<<" ";
            i++;
            j--;
            if(i==j)
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}