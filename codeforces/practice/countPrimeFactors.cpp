#include <iostream>
#include <vector>
using namespace std;

vector<bool> isPrime(1e6 + 1, true);
vector<long long int> primes;

void sieve()
{
    long long int i, j;
    isPrime[0] = false;
    isPrime[1] = false;
    for (i = 2; i <= 1e6; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (j = i * i; j <= 1e6; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}

long long int  primefactors(long long int N)
{

    vector<int> factors;
    long long int pf_idx = 0, pf = primes[pf_idx], count = 0;
    while (pf * pf <= N)
    {
        while (N % pf == 0)
        {
            N /= pf;
            factors.push_back(pf);
            count++;
        }
        pf = primes[++pf_idx];
    }
    if (N != 1)
    {
        // factors.push_back(N);
        count++;
    }
    return count;
}

int main()
{
    long long int N;
    cin >> N;
    sieve();
    cout<<primefactors(N)<<endl;
    // for (int i = 0; i < 12; i++)
    // {
    //     cout <<factors[i] << endl;
    // }

    return 0;
}