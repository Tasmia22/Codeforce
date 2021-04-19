#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

    int T;
    cin>>T;

    while(T--)
    {
        ll n, x;
        cin>>n>>x;
        ll arr[n];
        for(ll i=0; i<n; i++)
       {
           cin>>arr[i];
       }

        sort(arr, arr+n);
        ll sum = 0,curr_avg = 0,cnt = 0;

        for(ll i=n-1; i>=0; i--)
        {
            //cout<<"array "<<arr[i]<<" ";
            sum += arr[i];
            curr_avg = sum/(n-i);
            if(curr_avg>=x)
                cnt++;
            else  break;
        }

        cout<<cnt<<endl;
    }
return 0;
}
