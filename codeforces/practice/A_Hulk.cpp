#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string v1 = "I hate it ";
    string v2 = "I hate that ";
    string v3 = "I love it ";
    string v4 = "I love that ";

    string n1 = "I hate it";
    string n2 = "I hate that I love it";
    string n3 = "I hate that I love that I hate it";
    if (n == 1)
        cout << n1 << endl;
    else if (n == 2)
        cout << n2 << endl;
    else if (n == 3)
        cout << n3 << endl;
    else if (n == 4)
        cout << v2+v4+v2+v3 << endl;
    // else if()

    return 0;
}