#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    // || ((x + z) >= y) || ((y + z) >= x)

    if (x > z && x > y && (x > (y + z))) // More Upvotes
        cout << "+" << endl;
    else if (y > z && y > x && (y > (x + z))) // more downvotes
        cout << "-" << endl;
    else if (x == y && z == 0)
        cout << "0" << endl;
    else if ((z >= x) || (z >= y) || ((x + z) >= y) || ((y + z) >= x))
        cout << "?" << endl;
    return 0;
}