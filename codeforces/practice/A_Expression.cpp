#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int max0 = INT_MIN;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int max4 = INT_MIN;
    int res1 = a+b*c;
    int res2 = a*(b+c);
    int res3 = a*b*c;
    int res4 = (a+b)*c;
    int res5 = a+b+c;
    int res6 = a*b+c;
    
    max0 = max(res1,res2);
    max1 = max(res3,res4);
    max2 = max(res5,res6);
    max3 = max(max0,max1);
    max4 = max(max3,max2);

    cout<<max4<<endl;
    return 0;
}