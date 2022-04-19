#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int countA = 0;
    int countD = 0;
    int countB = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs((a - i)) < abs((b - i)) )
        {
            countA++;
        }
        else if (abs((a - i)) == abs((b - i)))
        {
            countD++;
        }
        else if (abs((a - i)) > abs((b - i)))
        {
            countB++;
        }
    }
    cout << countA << " " << countD << " " << countB << endl;

    return 0;
}