#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;;
    vector<long long> pref;
    for (int i = 1; i <= 1000; i++)
    {
        pref.push_back(i * i);
    }
    while (t--)
    {
        for (auto it : pref)
        {
            cout<<it<<endl;
            fflush(stdout);
            int status;
            cin>>status;
            if (status == 1)
                return 1;
            else if (status == -1)
                exit(0);
        }
    }
}