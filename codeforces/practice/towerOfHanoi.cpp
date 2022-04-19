#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(i=a;i<b;++i)
#define repr(i,a,b) for(i=a;i>=b;--i)
#define tst() int ttt;cin>>ttt;for(int test=1;test<=ttt;++test)

using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper){

    if(n==0){
        return;
    }

    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move form "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    towerOfHanoi(3,'A','C','B');

    return 0;
}