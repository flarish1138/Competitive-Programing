#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
  {    
       int k,n;
         string s;
         cin>>n>>k;
        cin>>s;
      char prev='*';
          int count=0;
          for(int i=0;i<n;i++){
              if(s[i]=='*' && (prev=='*'|| count==0))
              {
                  count++;
              if(count==k){
                 break;
                  }
              }
              else{
              count=0;
              }
               prev=s[i];
          }
          if(count==k)cout<<"YES"<<endl;
         else   cout<<"NO"<<endl;
      }
  }