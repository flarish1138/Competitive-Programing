#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char s[n];
    int z = n / 2;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    cout << "PRINT"<< " " << s[k] << endl;
    //  cout<<z;
    if (k > z && k < n)
    { // RIGHT MOST
        for (int i = k; i < n; i++)
            cout << "RIGHT" << endl;
    }
    else if (k < z && k > 1)
    { // LEFT MOST
        for(int i = k;i>1;i--)
        cout<<"LEFT"<<endl;
    }
    else if (k < z && k == n)
    { // RIGHT MOST
        for(int i =k;i<n;i++)
        cout<<"RIGHT"<<endl;
    }
    else if (k == n)
    { // LEFT MOST
    }
    else if (k == z)
    { // RIGHT MOST
    }
    return 0;
}