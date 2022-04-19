// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;
//     if (n == 4 || n == 7)
//     {
//         cout << "NO" << endl;
//         return 0;
//     }
//     while (n > 0)
//     {
//         if (n % 10 == 4 || n % 10 == 7)
//         {
//             n = n / 10;
//         }
//         else
//         {
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES" << endl;
//     return 0;
// }
#include<iostream>
using namespace std;


    int main(){
  int i,c;
  long long int n;
  cin>>n;
  
  for(c=0; n>0; n/=10){
    if((n%10 == 4)||(n%10==7))
      c++;
  }
  
  if((c==4)||(c==7))
    printf("YES");
  else
    printf("NO");
  return 0;
}
    
