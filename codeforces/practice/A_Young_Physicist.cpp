 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
     int n;
     cin>>n;
     int resx=0;
     int resy=0;
     int resz=0;
     while(n--){
         int x,y,z;
         cin>>x>>y>>z;
         resx += x;    
         resy += y;    
         resz += z;    
     }
     if(resx == 0 && resy == 0 && resz ==0){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
     return 0;
 }