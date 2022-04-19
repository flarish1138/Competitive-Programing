#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    long long int c = 0;
    long long int b = 0;
    long long int count = 0;
    cin >> a;

    while (abs(a) != 0)
    {
        count++;
        a = a / 10;
    }
    // cout<<count<<endl;
    for (int i = 1; i <= 10; i++)
    {
        a = a + 1;
        c = abs(a);
        b++;
        while (count--)
        {
            if ((c % 10) == 8)
            {
                // cout << b << endl;
                break;
            }
            // count--;
            c = c / 10;
            // cout<<a<<endl;
        }
    }
    // cout<<b;
    return 0;
}