#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[110][110];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> a[i][j];
        }
    }
    int countX = 0;
    int countO = 0;
    bool yes = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j - 1] == 'o' && j - 1 >= 0 && i < n)
                countX++;
            if (a[i][j + 1] == 'o' && j + 1 < n)
                countX++;
            if (a[i - 1][j] == 'o' && i - 1 >= 0 && j <= n)
                countX++;
            if (a[i + 1][j] == 'o' && i + 1 < n)
                countX++;

            if (countX % 2 == 1)
                yes = false;
        }
    }

    if (yes)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}