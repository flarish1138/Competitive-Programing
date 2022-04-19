#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int count = 0;
    int x, y;
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = x;
    }
    sort(arr, arr + n);
    if(n == 2){
        for (int i = 0; i < n; i++)
    {
        if (s > arr[i])
        {
            // s = s + y;
            cout << "YES" << endl;
            // count++;
            break;
        }
    }
    }
    for (int i = 0; i < n; i++)
    {

        if (s > arr[i])
        {
            s = s + y;
            // cout << "YES" << endl;
            count++;
            // break;
        }
        else
        {
            // cout<<"NO"<<endl;
            s = s + y;
            i--;
            // break;
        }
        // cout << arr[i] << endl;
    }
    if (count == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // if (count == 0)
    // {
    //     cout << "NO" << endl;
    // }
    return 0;
}