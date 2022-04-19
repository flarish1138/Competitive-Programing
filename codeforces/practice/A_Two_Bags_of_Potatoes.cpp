#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int y, k, n;
    int count = 0;
    cin >> y >> k >> n;
    int z = n/k;
    for(int i = 1;i<=100000 ;i=i*k){
        if(((i+y)%k == 0) && ((i+y)/k<=z) ){
            cout<<i<<" ";
            count++;
        }
    }
    
    if(count == 0)
    cout<<"-1"<<endl;
    return 0;
}