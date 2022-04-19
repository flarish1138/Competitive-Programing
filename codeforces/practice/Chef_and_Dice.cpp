#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long sum1 = 0;
    long long sum2 = 0;
    long long sum3 = 0;
    
    while (t--)
    {
        long long n;
        cin >> n;
        
        if (n == 1)
        {
            sum1 = 20;
            cout << sum1 << endl;
        }
        else if (n == 2)
        {
            sum2 = 36;
            cout << sum2 << endl;
        }
        else if (n == 3)
        {
            sum3 = 51;
            cout << sum3 << endl;
        }
        else if(n>=4){
            if(n%4 == 0){
                long long int z = 44 * (n/4) + 16;
                cout<<z<<endl;
            }
            else if(n%4 == 1){
                long long int w = 44 * (n/4) + 3*4 + sum1;
                cout<<w<<endl;
            }
            else if(n%4 == 2){
                long long int y = 44 * (n/4) + 2*4 + sum2; 
                cout<<y<<endl;
            }
            else if(n%4 == 3){
                long long int v = 44 * (n/4) + 1*4 + sum3; 
                cout<<v<<endl;
            }
        }
    }
    return 0;
}