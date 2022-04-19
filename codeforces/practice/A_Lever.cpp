#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;
    long long int c;
    long long int x;
    long long int y;
    long long int count = 0;
    long long int n = s.length();
    long long int lengthLeft;
    long long int lengthRight;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '^')
        {
            c = i;
        }
    }
    // cout << c << endl;
    for (int i = 1; i <= c; i++)
    {

        if (s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            x = i;
            lengthLeft += abs(c - x)*s[i];
            count++;
        }
    }
    for (int i = c+1; i <= n; i++)
    {

        if (s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
            y = i;
            lengthRight += abs(c - y)*s[i];
            count++;
        }
    }
    if(lengthLeft>lengthRight)
    cout<<"left"<<endl;
    else if(lengthLeft<lengthRight)
    cout<<"right"<<endl;
    else if(lengthLeft==lengthRight)
    cout<<"balance"<<endl;

    else if (count == 0)
        cout << "balance" << endl;
    return 0;
}