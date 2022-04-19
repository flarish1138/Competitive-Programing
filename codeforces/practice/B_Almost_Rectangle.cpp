#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        char a[401][401];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
                int count =0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if(a[i][j] == '*'){
                   count++;
                   if(count == 2){
                       
                   }
                }

    }

    return 0;
}