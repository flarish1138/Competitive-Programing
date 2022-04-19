#include <bits/stdc++.h>
#include <vector>
using namespace std;


// vector<bool> isPrime(90000001, true);
vector<int> primes;
bool isPrime[5761459  ];

void Sieve()
{
    int maxN = 100000001   ;
    int i, j;
    isPrime[0] = isPrime[1] = true;
    for (i = 2; i * i <= maxN ; i++)
    {
        if (!isPrime[i])
        {
            primes.push_back(i);
            for (j = i*i; j <= maxN; j += i)
            {
                isPrime[j] = true;
            }
        }
    }
}
int main()
{
    int q ,n;
    cin>>q;


    Sieve();
    while(q--){
        cin>>n,cout<<primes[n-1]<<endl;
    }
    return 0;
}