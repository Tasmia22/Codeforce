#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll card_n(ll height)
{
    ll sum=0;
    sum=height*2;
    for(ll i=1; i<height; i++)
        sum=sum+(height-i)*3;
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
         for(int i=1; i<20; i++)
             cout<<card_n(i)<<" ";
         cout<<endl;

        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        for(ll h=1; ; h++)
        {
          //  cout<<"card_n("<<h<<")="<<card_n(h)<<endl;
            if(card_n(h)>n)
            {
                n=n-card_n(h-1);
                h=1;
                cnt++;
            }
            else if(card_n(h)==n)
            {
                cnt++;
                break;
            }

            if(n<2)
                break;
        }
        cout<<cnt<<endl;
    }
}
