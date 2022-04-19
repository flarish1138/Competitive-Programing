#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    char a[4][4];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
            
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
       
            if(a[i][j] == '1')
            count1++;
            if(a[i][j] == '2')
            count2++;
            if(a[i][j] == '3')
            count3++;
            if(a[i][j] == '4')
            count4++;
            if(a[i][j] == '5')
            count5++;
            if(a[i][j] == '6')
            count6++;
            if(a[i][j] == '7')
            count7++;
            if(a[i][j] == '8')
            count8++;
            if(a[i][j] == '9')
            count9++;
        }
    }
    int t = 2*k;
    if(count1>t || count2>t || count3>t || count4>t || count5>t || count6>t || count7>t || count8>t || count9>t)
    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   
    return 0;
}