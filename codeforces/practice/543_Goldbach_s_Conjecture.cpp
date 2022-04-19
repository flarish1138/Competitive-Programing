#include <bits/stdc++.h>
using namespace std;
#define N 1000000

vector<bool> isPrime(N, true);

void sieve()
{
    long long int i, j;
    isPrime[0] = false;
    isPrime[1] = false;
    for ( i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            for (j = i * i; j <=N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    isPrime[2] = false;
}

int main()
{
    sieve();
    long long int n;
    while (cin >> n)
    {
        for (int a = 3; a < n; ++a)
            if (isPrime[a]==true)
            {
                long long int b = n - a;
                if (isPrime[b]==true)
                {
                    cout << n << " = " << a << " + " << b << endl;
                    break;
                }
            }
    }

    return 0;
}