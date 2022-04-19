#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c = 0;

    cin >> a;
    cin >> b;

    c = a + b;
    // cout<<c;
    long long int x = 0,y = 0,z=0;
    long long int i =1,j=1,k=1;
    while (a > 0 )
    {
        if (a % 10 == 0 )
        {
            a = a/10;
        }
        else if(a%10 != 0){
            x += i * (a%10); 
            i = i*10;
            a = a/10;
        }
    }
    // cout<<x<<endl;
    while (b > 0 )
    {
        if (b % 10 == 0 )
        {
            b = b/10;
        }
        else if(b%10 != 0){
            y += j * (b%10); 
            j = j*10;
            b = b/10;
        }
    }
    // cout<<y<<endl;
    while (c > 0 )
    {
        if (c % 10 == 0 )
        {
            c = c/10;
        }
        else if(c%10 != 0){
            z += k * (c%10); 
            k = k*10;
            c = c/10;
        }
    }
    // cout<<z<<endl;

    if((x+y) == z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}