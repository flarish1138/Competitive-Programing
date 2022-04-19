#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    string dummy = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s, str;
    cin >> s;
    cin >> str;
    if (s == "R")
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < dummy.size(); j++)
            {
                if(str[i] == dummy[j])
                    cout<<dummy[j-1];
            }
        }
    }
    else if (s == "L")
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < dummy.size(); j++)
            {
                if(str[i] == dummy[j])
                    cout<<dummy[j+1];
            }
        }
    }

    return 0;
}