#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int  sum = 0;
    while(n--){
        string s;
        cin>>s;
        if(s == "Tetrahedron"){
            sum += 4;
        }
        else if(s == "Icosahedron"){
            sum += 20;
        }
        else if(s == "Cube"){
            sum += 6;
        }
        else if(s == "Dodecahedron"){
            sum += 12;
        }
        else if(s == "Octahedron"){
            sum += 8;
        }
    }
    cout<<sum<<endl;
    return 0;
}