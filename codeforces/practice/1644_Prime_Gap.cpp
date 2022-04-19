#include <bits/stdc++.h>
using namespace std;
#define N 1300005
vector<bool> isPrime(N, true);
vector<long long int> primes;

void sieve()
{
    long long int i, j;
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= N; j++)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();
    long long int k;
    while (cin >> k)
    {
        int z = k;
        int x = k;
        if (isPrime[k])
        {
            cout << 0 << endl;
            return 0;
        }
        else  if (!isPrime[k])
        for (int i = 1;; i++)
        {
            if (!isPrime[z])
            {
                z--;
               
            }
            else{
                 break;
            }
        }
        for (int i = 1;; i++)
        {
            if (!isPrime[x])
            {
                x++;
               
            }
             else{
                 break;
            }
        }
        cout << x - z << endl;
    }
    return 0;
}