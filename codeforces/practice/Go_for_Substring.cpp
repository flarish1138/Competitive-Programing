#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int min_cost = 1001; 
    int n = a.length() - b.length();
    for(int i =0;i<n;i++){
        int cost =0;
        for(int j =0;j<b.length();j++){
            if(a[i+j]!=b[j])
            cost++;
        }
        min_cost = min(cost,min_cost);
    }
    cout<<min_cost*5<<endl;
    return 0;
}