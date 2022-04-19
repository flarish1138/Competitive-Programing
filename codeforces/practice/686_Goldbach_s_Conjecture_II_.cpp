#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(1e5 + 1, true);
vector<long long int> primes(32767);

void sieve()
{
    long long i, j;
    isPrime[0] = false;
    isPrime[1] = false;
    for (i = 2; i * i <= 1e5 + 1; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (j = i * i; j <= 1e5 + 1; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
// vector<long long int> primefactors(long long int N)
// {

//     vector<long long int> factors;
//     long long int pf_idx = 0, pf = primes[pf_idx], count = 0;
//     while (pf * pf <= N)
//     {
//         while (N % pf == 0)
//         {
//             N /= pf;
//             factors.push_back(pf);
//             // count++;
//         }
//         pf = primes[++pf_idx];
//     }
//     if (N != 1)
//     {
//         factors.push_back(N);
//         // count++;
//     }
//     return factors;
// }

int main()
{
    sieve();
    // vector<long long int> V;
    int count;
    int M = primes.size();
    while (true)
    {
        long long int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }

        count = 0;
        // V = primefactors(n);
        for (int i = 0; i <= M - 1; i++)
        {
            if (primes[i] > n / 2)
                break;

            int x = n - primes[i];

            if (x < 1)
                break;

            else if (isPrime[x])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
