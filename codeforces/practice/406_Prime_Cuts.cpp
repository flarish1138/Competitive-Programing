#include <bits/stdc++.h>
using namespace std;
#define MAX 1010

vector<bool> isPrime(MAX, true);
vector<long long int> primes;

void sieve()
{
    long long int i, j;
    isPrime[0] = false;
    isPrime[1] = true;
    primes.push_back(1);
    for (i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (j = i * i; j < MAX; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();
    int N, C;

    int count = 0;
    vector<int> v;
    while (cin >> N >> C)
    {
        cout << N << " " << C << ":" << " ";
        for (int i = 0; i < primes.size() && primes[i] <= N; i++)
            v.push_back(primes[i]);

        C *= 2;
        if (v.size() & 1)
            C = C - 1;

        int A = floor(C / 2.0);
        int B = ceil(C / 2.0);
        for (int i = max(0, (int)v.size() / 2 - A); i < min((int)v.size(), (int)v.size() / 2 + B); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}