#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int j = 1;
    int mn = INT_MAX;
    int index_first;
    int index_last;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - a[j]) < mn)
        {
            mn = abs(a[i] - a[j]);
            index_first = i;
            index_last = j;
        }
        if (i == n - 1)
        {
            if (abs(a[i] - a[0]) < mn)
            {
                mn = abs(a[i] - a[0]);
                index_first = i;
                index_last = 0;
            }
        }
        j++;
    }
        cout << index_first+1 << " " << index_last+1 << endl;
        return 0;
}