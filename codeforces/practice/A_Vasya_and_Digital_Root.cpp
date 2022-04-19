#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, d;
    cin >> k >> d;
    long long int b = 1;
    for(int i =1;i<k;i++){
        b = b * 10;
    }
 
    if (d == 0 && k == 1) cout << 0 << endl;
    else if (d == 0 && k > 1) cout << "No solution" << endl;
    
    if(d>0){
        cout<<d;
        for(int i =1;i<k;i++)
        cout<<0;
    }

    return 0;
}