// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char s[110];
//     int n = strlen(s);
//     int count = 0;
//     int count1 = 1;
//     int z[110];
//     int x[110];
//     char m[110];
//     for (int i = 0; i < n; i++)
//         cin >> s[i];
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] >= 65 && s[i] <= 90)
//         {
//             x[i] = s[i] + 32;
//             count++;
//         }

//         // if ((s[0] >= 90 && s[0] <= 122) && (s[i + 1] >= 65 && s[i + 1] <= 90))
//         // {
//         //     z[0] = s[0] - 32;
//         //     z[i + 1] = s[i + 1] + 32;
//         //     count1++;
//         // }
//     }
//     for (int i = 1; i < n; i++)
//     {

//         if ((s[0] >= 90 && s[0] <= 122) && (s[i] >= 65 && s[i] <= 90))
//         {
//             z[0] = s[0] - 32;
//             z[i] = s[i] + 32;
//             count1++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//          m[i] = (char) z[i];
//     }
//     cout<<m[0]<<endl;
//     // for(int i=0;i<n;i++){
//     //     if(count == n){
//     //         cout<<(char)x[i];
//     //     }
//     //     else{
//     //         if(count1 == n-1){
//     //             cout<<(char)z[i];
//     //         }
//     //     }
//     // }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char u;
    bool c = true;
    cin >> s;

    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
            c = false;
    }
    if (c == true)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;

    return 0;
}
