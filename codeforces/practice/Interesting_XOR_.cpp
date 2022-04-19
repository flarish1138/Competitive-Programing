#include <bits/stdc++.h>
#include<cmath>
#include <climits>
using namespace std;

/*
    Most Significant bit ka index ko find krna hai and then range hoga 2^d d= index of that MSB 
*/

/*
Input:
2
13
10

Expected Output:
70
91

My Output:
70
91
*/
// Sub task 1 sahi raha but sub task 2 ko O(n) me krna h wo smajh ni aaaya kaise hoga..SOME HINTS!!!
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;   
        int  tempC = c;
        int a;
        int b;
        // C =13 -- 1101
        // a =10 -- 1010
        // b =7 --  0111
        
        int k = (int)(log2(c)) ; // MSB

        for(int i =0;i<=k;i++)
        {
        c = (c ^ (1<<i));    // 0010   /// Yaha pe wo C ke andar hi q store hota h a ke andar q ni
        }

        // cout<<c<<endl;

        a = (c | (1<<k));

        
        // cout<<a<<endl;

        for(int i =0;i<=k;i++){
            if((1<<i)& a == 1){

                a = (a & (~(1<<i)));


            }
        }
        cout<<a<<endl;
       



































        // int z = pow(2,k);
        // int mx = LONG_MIN;
        // int product =1;
        // int ff;
        // for (int i = 0; i <16; i++)
        // {
        //     for (int j = 0; j <16; j++)
        //     {
        //         ff = (i ^ j);

        //         if (ff == c)
        //         {
        //             product = i*j;
        //             mx = max(mx, product);
        //         }
        //     }
        // }
    //     for (int i = 0; i <(z<<1); i++)
    //     {
    //         for (int j = 0; j <(z<<1); j++)
    //         {
                
    //             ff = (i ^ j);
                
    //             if (ff == c)
    //             {
    //                 product = i*j;
    //                 mx = max(mx, product);
    //             }
    //         }
    //     }
    //     cout<<mx<<endl;
    }
    return 0;
}
