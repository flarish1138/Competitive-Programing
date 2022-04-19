#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int countUpper = 0;
    int countLower = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            countUpper++;
        else if (s[i] >= 97 && s[i] <= 122)
            countLower++;
    }
    if (countUpper > countLower)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                s[i] = s[i]-32;
        }
        cout<<s<<endl;
        return 0;
    }
    else if (countLower > countUpper)
    {
        for (int i = 0; i < n; i++)
        {
                if (s[i] >= 65 && s[i] <= 90)
                s[i] = s[i]+32;
        }
        cout<<s<<endl;
        return 0;
    }
    else  if (countUpper == countLower)
    {
        for (int i = 0; i < n; i++)
        {
           if (s[i] >= 65 && s[i] <= 90)
                s[i] = s[i]+32;
        }
        cout<<s<<endl;
        return 0;
    }
    return 0;
}