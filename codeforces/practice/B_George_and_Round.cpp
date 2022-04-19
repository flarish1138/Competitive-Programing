#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin("input.in");
    //ofstream cout("output.out");
    long N,M,A[3009],B[3009],K=0;
    cin>>N>>M;
    for(long i=0;i<N;i++)
        cin>>A[i];
    for(long i=0;i<M;i++)
        cin>>B[i];
    long i=0,j=0;
    sort(A,A+N);
    sort(B,B+M);
    while(i<N && j<M)
        if(A[i]<=B[j])
        {
            //cout<<A[i]<<"\t"<<B[j]<<"\n";
            i++;
            j++;
            K++;
        }
        else
            j++;
    cout<<N-K;
}