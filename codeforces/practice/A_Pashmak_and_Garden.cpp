#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    int xSum = (x2-x1)*(x2-x1);
    int ySum = (y2-y1)*(y2-y1);

    int d = sqrt(xSum+ySum);

    cout<<d<<endl;
    

    return 0;
}