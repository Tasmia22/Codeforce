#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,cnt=0;
        cin>>a>>b;
        while(a<b)
        {
            a<<=1;
            cnt++;
        }
        while(a>b && a%2==0)
        {
            a>>=1;
            cnt++;
        }
        //  cout<<"cnt= "<<cnt<<endl;
        if(a==b)
            { ll x=ceil((float)cnt/3.0);
                cout<<x<<endl;}

        else
            cout<<-1<<endl;
    }
    return 0;
}
