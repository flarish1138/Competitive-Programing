#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int total  = 0;
    total += n;
    for(int i =m;i<=total;i=i+m)
    {
        total = total+1;
    }
    cout<<total<<endl;
    return 0;
}