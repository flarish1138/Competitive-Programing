// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int pos;
//     string str;
//     // if(s[0] == 'W' && s[1]=='U' && s[2]=='B' && s[s.length()-1]== 'W' && s[s.length()-2]=='U' && s[s.length()-3]== 'B'){

//     // }
//     s.erase(0,3);
//     s.erase(s.length()-3,3);
//     int i = 3;
//     while(i<s.length()-3){
//         if(s.substr(i,3)== 'WUB'){
//             i = i + 3;
//         }
//         else{
//             str = s.substr(i,3);
//         }

//     }
//     cout<<str<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            c++;
            if (c == 1)
                cout << " ";
            i += 2;
        }
        else
        {
            cout << s[i];
            c = 0;
        }
    }
    return 0;
}