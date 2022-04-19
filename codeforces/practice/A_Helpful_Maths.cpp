// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// int main(){
//     string s;
//     string c;
//     string d;
//     string e;
//     cin>>s;
//     int j =0;
//     int k =0;
//     int l =0;
//     for(int i =0;i<s.length();i++){
//         if(s[i] == '3'){
//             // c = c + "3";
//             j++;
//         }
//         else if(s[i] == '2'){
//             k++;
//         }
//         else if(s[i] == '1'){
//             l++;
//         }
//     }
//     for(int i =1;i<=l;i++){
//         if(i<s.length()){
//         cout<<"1"<<"+";
//         }
//         else if(i = s.length()){
//             cout<<"1";
//         }
//     }
//     for(int i =1;i<=k;i++){
//         if(i<s.length()){
//         cout<<"2"<<"+";
//         }
//          if(i = s.length()){
//             cout<<"2";
//         }
//     }
//     for(int i =1;i<=j;i++){
//         if(i<s.length()){
//         cout<<"3"<<"+";
//         }
//         else if(i = s.length()){
//             cout<<"3";
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long j = 0;
    long long z = s.length() - s.length() / 2;
    // cout<<z<<endl;
    int a[z];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            a[j] = 1;
            j++;
        }
        else if (s[i] == '2')
        {
            a[j] = 2;
            j++;
        }
        else if (s[i] == '3')
        {
            a[j] = 3;
            j++;
        }
    }
    sort(a, a + z);
    cout << a[0];
    for (int i = 1; i < z; i++)
    {
        cout << "+" << a[i];
    }
    return 0;
}