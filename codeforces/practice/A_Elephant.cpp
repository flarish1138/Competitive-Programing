#include <iostream>
using namespace std;

int main()
{
    long long int n;
    long long int m;
    long long int rem;
    long long int count = 0;
    cin >> n;
    if (n > 0 && n <= 5)
    {
        cout << 1;
        return 0;
    }

    while (n > 5)
    {
        m = n / 5;
        rem = n % 5;
        n = rem;
        count = m;
        if (n > 0 && n <= 5)
        {
            cout << count + 1 << endl;
        }else if(n==0){
            cout<<count<<endl;
        }
        else if (n > 5)
        {
            m = n/5;
            rem = n%5;
            n = rem;
            count = m;
        }
    }

    return 0;
}