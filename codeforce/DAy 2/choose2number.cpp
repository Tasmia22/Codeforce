#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxA=-99;
    int m,maxB=-99;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        if(A[i]>maxA)
            maxA=A[i];
    }
    cin>>m;
        int B[m];
    for(int i=0; i<m; i++)
    {
        cin>>B[i];
        if(B[i]>maxB)
            maxB=B[i];
    }

    cout<<maxA<<" "<<maxB<<endl;
    return 0;
}
