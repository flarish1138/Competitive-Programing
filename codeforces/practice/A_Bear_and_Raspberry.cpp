#include<bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
const int inf = 0x3f3f3f3f;  
int main()   
{  
	// freopen("shuju.txt","r",stdin);
    int n,c;
    int a[110];
    cin>>n>>c;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    }  
    int ma=-1;
    for(int i=1;i<n;i++)
    	ma=max(ma,a[i]-a[i+1]);
    if(ma==-1||ma-c<0)
    	cout<<"0"<<endl;
    else
    	cout<<ma-c<<endl;
    return 0;  
}