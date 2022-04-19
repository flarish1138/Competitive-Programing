#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int A[N];
        int sum = 0;
        int count = 0;
        int power = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        sort(A, A + N);
        
        if (sum == N)
        {
            cout << "-1" << endl;
            break;
        }
        for (int i = 0; i < N; i++)
        {
            if (sum % 2 == 0)
            {
                cout << count << endl;
                break;
            }
            else
                if (sum % 2 != 0 && A[i] % 2 == 0 && A[i]<4)
            {
                power = ceil(A[i] >> 1) - 1;
                sum = sum - pow(A[i], power);
                count++;
            }
        }
        if(sum%2!=0){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}