#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string f;
    int count =0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '*')
        {
            f.erase(i-1,1);
        }
        else if (s[i] == '<')
        {   while(s[i])
            i =0;
        }
        else if (s[i] == '>')
        {   
            s.erase(i,1);
            i = s.length();
        }
        else if (s[i] == '#')
        {
            count++;
            if(count%2==1){
                s[i]='1';
            }
            else{
                s[i] = 'u';
            }
        }
        else
        {
            f[i] == s[i];
        }
    }
    return 0;
}