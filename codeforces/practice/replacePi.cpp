#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(i=a;i<b;++i)
#define repr(i,a,b) for(i=a;i>=b;--i)
#define tst() int ttt;cin>>ttt;for(int test=1;test<=ttt;++test)

using namespace std;

void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else {
        cout<<s[0];
        replacePi(s.substr(1));
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    replacePi("pippppiiiipi");
    
    return 0;
}