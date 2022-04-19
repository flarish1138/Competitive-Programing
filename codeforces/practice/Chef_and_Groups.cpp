/*
Input:
4
000
010
101
01011011011110

Expected Output:
0
1
2
4

My Output:
0
0
0
0
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    int temp = 0;
    while (t--)
    {   int i;
         string S;
        /*for (i = 0; i < S.length(); i++)
        {
            cin >> S[i];
        }*/
        // You can directly take input in string don't need to run a loop
        cin >> S;
        for (i = 0; i < S.length(); i++)
        {
            if (S[i] == '0' && count >= 1)
            {
                temp = temp + 1;
                count = 0;
            }
            else if (S[i] == '1')
            {
                count = count + 1;
            }
        }
        // You need to do something here
		// for the corner case of the rightmost group
		
		if(count >=1){
            temp++;
        }	
		
        cout << temp << endl;
        temp = 0;
        count = 0;
    }
    return 0;
}
