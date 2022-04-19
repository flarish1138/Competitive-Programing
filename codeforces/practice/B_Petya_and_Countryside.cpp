#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    scanf("%d", &n);
    vector<int> A(n);
    for (auto &i : A)
        cin >> i;
    vector<int> ans;
    if (n == 1)
    {
        printf("1");
        exit(0);
    }
    //consider edges also
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int counter = 1;
            for (int j = 0; j < n - 1; j++)
            {
                if (A[j] >= A[j + 1])
                    counter++;
                else
                    break;
            }

            ans.push_back(counter);
        }
        else if (i == n - 1)
        {
            int counter = 1;
            for (int j = n - 1; j > 0; j--)
            {
                if (A[j] >= A[j - 1])
                    counter++;
                else
                    break;
            }
            ans.push_back(counter);
        }
        else
        {
            int count = 1;
            for (int j = i; j < n - 1; j++)
            {
                if (A[j] >= A[j + 1])
                {
                    //printf("Comparing %d %d\n", A[j], A[j + 1]);
                    count++;
                }
                else
                    break;
            }
            for (int j = i; j > 0; j--)
            {
                if (A[j] >= A[j - 1])
                {
                    //printf("Comparing %d %d\n", A[j], A[j - 1]);
                    count++;
                }
                else
                    break;
            }
            ans.push_back(count);
        }
    }

    cout << *max_element(ans.begin(), ans.end());
    return 0;
}