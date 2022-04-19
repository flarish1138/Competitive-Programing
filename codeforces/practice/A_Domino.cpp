#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    int sumX = 0;
    int sumY = 0;
    int time = 0;
    bool s(false);
    for (int i = 1; i <= n; i++)
    {

        cin >> x >> y;

        if (n == 1 && (x % 2 + y % 2)  ==1)
        {
            cout << "-1" << endl;
            return 0;
        }
        if ((x % 2 + y % 2) == 1)
        {
            s = true;
        }
            sumX += x;
            sumY += y;
    }
    if (sumX % 2 == 0 && sumY % 2 == 0)
        cout << 0 << endl;
    else if (sumX % 2 == 1 && sumY % 2 == 1 && s)
        cout << 1 << endl;
    else
        cout << "-1" << endl;

    return 0;
}