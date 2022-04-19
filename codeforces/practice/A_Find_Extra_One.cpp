#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int PositiveX = 0;
    int PositiveY = 0;
    int NegativeX = 0;
    int NegativeY = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 0 )
        {
            PositiveX++;
        }
        else if (x < 0)
        {
            NegativeX++;
        }
        // if (y > 0 )
        // {
        //     PositiveY++;
        // }
        // else if (y < 0)
        // {
        //     NegativeY++;
        // }
    }
    if(PositiveX>=NegativeX && NegativeX<=1)
    cout<<"Yes"<<endl;
    else if(PositiveX<=NegativeX && PositiveX<=1)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}