#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    // for(int i =0;i<r;i++)
    // {
    //     for(int j = 0; j<c;j++){
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;

    // }
    int countDot = 0;
    int countS = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == '.')
            {
                countDot++;
            }
            else if (a[i][j] == 'S')
            {
                countS++;
            }
        }
    }
    if (countDot == 0)
    {
        cout << countDot << endl;
    }
    else
    {

        cout << abs((r*c) - (countS * countS)) << endl;
    }
    // cout << countDot << " " << countS << endl;

    return 0;
}