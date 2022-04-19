#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int U, V, A, S;
        cin >> U >> V >> A >> S;
        int c = ((U * U) - (2 * A * S));
        // int d = sqrt(c);
        
         if( U*U - 2*A*S <= V*V)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }

    return 0;
}