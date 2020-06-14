#include<bits/stdc++.h>
#define ll long long
using namespace std;
deque <ll> d;
int main()
{
    ll n;
    cin>>n;
     for(ll i=0; i<n; i++)
    {
        ll num;
        cin>>num;
        d.push_back(num);
    }
    ll size_d=d.size(),ss=0,ds=0;
    for(ll i=1; size_d>=1; i++)
    {
        if(d[0]>=d[size_d-1] && i%2!=0)
        {
            ss+=d[0];
        //    cout<<"ss= "<<ss<<"    "<<d[0]<<endl;
            d.pop_front();
        }
        else if(d[0]>=d[size_d-1] && i%2==0)
        {
            ds+=d[0];
              //cout<<"ds= "<<ds<<"    "<<d[0]<<endl;
            d.pop_front();
        }

        else if(d[0]<d[size_d-1] && i%2!=0)
        {
            ss+=d[size_d-1];
            d.pop_back();
        }
        else if(d[0]<d[size_d-1] && i%2==0)
        {
            ds+=d[size_d-1];
            d.pop_back();
        }
        size_d=d.size();
         //cout<<"\nsize_d= "<<size_d<<endl;
    }
    cout<<ss<<" "<<ds<<endl;
}
