// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     long long a, b;

//     long long int count = 1;
//     cin >> a >> b;
//     long long int price = a;
//     long long int quality = b;
//     n = n - 1;
//     while (n--)
//     {
//         cin >> a >> b;
//         if (a > price && b < quality)
//         {
//             price = a;
//             quality = b;
//             count++;
//         }
//         price = a;
//         quality = b;
//         if(a==b){
//             cout<< "Happy Alex"<<endl;
//             exit(0);
//         }
//         if (count == 2)
//         {
//             break;
//         }
//     }
//     // count = count -1;

//     if (count == 2)
//     {
//         cout << "Happy Alex" << endl;
//     }
//     else
//     {
//         cout << "Poor Alex" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (a != b)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
}
