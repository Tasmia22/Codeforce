#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,l;
    cin>>k>>l;
    long long int cnt=0,n=1;
    while(n<l && (l%k)==0)
    {
        n=n*k;
        cnt++;
    }
    if(n==l)
    {
        cout<<"YES\n"<<cnt-1<<endl;
        return 0;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
