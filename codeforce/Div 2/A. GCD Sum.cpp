#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcdSum(ll n1)
{
    ll temp=n1,n2=0,gcd;
    while(temp)
    {
        n2+=temp%10;
        temp=temp/10;

    }

        for(ll i=1; i <= n1 && i <= n2; ++i)
    {

        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
return gcd;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(gcdSum(n)==1)
        {n++;
        //cout<<"\ngcdSum(n="<<n<<")=  "<<gcdSum(n)<<endl;
        }
        cout<<n<<endl;
    }
}
