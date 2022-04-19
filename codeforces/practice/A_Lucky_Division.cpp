#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count4 = 0;
    int count7 = 0;
    int count = 0;
    int a = n;
    while (n > 0)
    {
        int b = n % 10;
        if (b == 4)
        {
            count4++;
            n = n / 10;
        }
        else if (b == 7)
        {
            count7++;
            n = n / 10;
        }
        else
        {
            count++;
            n = n / 10;
        }
    }
    // cout << count4 << " " << count7 << " " << count << endl;
    if ((a % 4 == 0) || (a % 7 == 0))
    {
        cout << "YES" << endl;
    }
    else if (count4 > 0 && count7 > 0 && count == 0)
    {
        cout << "YES" << endl;
    }
    else if(a%47 == 0){
        cout<<"YES"<<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}