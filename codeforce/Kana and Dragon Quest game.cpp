#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        int n,m;
        cin>>x>>n>>m;
        long long int power=pow(2,n);
        cout<<"p="<<power<<endl;
        long long int ans=(x/power)+(5*n)-10*m;
        cout<<"ans="<<ans<<endl;
        if(ans<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
