#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[25];
    int chest = 0;
    int biceps = 0;
    int back = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i%3 == 0)
        chest += a[i];
        if(i%3 == 1)
        biceps += a[i];
        if(i%3 == 2)
        back += a[i];
    }

    if(max(chest,(max(biceps,back))) == chest)
    cout<<"chest"<<endl;
    else if(max(chest,(max(biceps,back))) == biceps)
    cout<<"biceps"<<endl;
    else if(max(chest,(max(biceps,back))) == back)
    cout<<"back"<<endl;

    // cout << chest << " " << biceps << " " << back << endl;

    return 0;
}