#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int val1[5000];
    int val2[5000];
    int val3[5000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a + n);
    int mn, mn1;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int j = 0, k = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            val1[j] = i + 1;
            j++;
            count1++;
        }
        else if (a[i] == 2)
        {
            val2[k] = i + 1;
            k++;
            count2++;
        }
        else if (a[i] == 3)
        {
            val3[l] = i + 1;
            l++;
            count3++;
        }
    }
    mn = min(count1, count2);
    mn1 = min(mn, count3);
    // cout<<mn<<endl;
    if (count1 == 0 || count2 == 0 || count3 == 0)
    {
        cout << "0" << endl;
        exit(0);
    }
    // sort()
    for (j = 0, k = 0, l = 0; j < mn1, k < mn1, l < mn1; j++, k++, l++)
    {
        cout << val1[j] << " " << val2[k] << " " << val3[l] << endl;
        // cout << val1[i] << " ";
    }
    // cout << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     // cout << val1[i] << " " << val2[i] << " " << val3[i] << endl;

    //     cout << val2[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     // cout << val1[i] << " " << val2[i] << " " << val3[i] << endl;

    //     cout << val3[i] << " ";
    // }
    return 0;
}