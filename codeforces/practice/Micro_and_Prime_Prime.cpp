#include <bits/stdc++.h>
#include <vector>
using namespace std;

int isPrime[1000001] = {1};
int Prime[1000001];


void seive()
{
    int i, j;
    int maxN = 1000000;
    isPrime[0] == isPrime[1] == 0;
    for (i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i])
        {

            for (j = i * i; j <= maxN; i = i + j)
            {
                isPrime[j] == 0;
            }
        }
    }

    int count = 0;
    for (i = 1; i <= maxN; i++)
    {
        if (isPrime[i] == 1)
        count++;

        if(isPrime[count] == 1)
        Prime[i] = 1;   
        else
        Prime[i] = 0;
    }
    for ( i = 1; i <= maxN; i++)
    Prime[i] += Prime[i-1];
    
    
}

int main()
{

    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int L, R;
        cin >> L >> R;
        int cnt  = Prime[R] - Prime[L-1];
        cout<<cnt<<endl;
    }
    return 0;
}
