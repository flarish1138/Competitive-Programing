#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mn;
    long long int a, p, x;
    while (n--)
    {
        cin >> a >> p >> x;

        for (int i = 1; i <= a; i++)
        {
            if (x != 0)
            {
                x--;
            }
        }
    }
    if (x == 0 & n == 3)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << p << endl;
        }

        return 0;
}