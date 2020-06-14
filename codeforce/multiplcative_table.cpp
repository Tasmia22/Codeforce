#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,n;
    long long int cnt=0;
    cin>>n>>x;
    if(n*n<x)
    {
        cout<<0<<endl;
        return 0;
    }
    for(long long int i=1; i<=n; i++)
    {
        if(x%i==0  && x/i<=n)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
