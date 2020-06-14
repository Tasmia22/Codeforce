
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int A[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            sum=sum+A[i];
        }
        if(sum<m)
            cout<<sum<<endl;
        else
            cout<<m<<endl;
    }

    return 0;
}
