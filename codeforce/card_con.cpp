#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000000];
void card_n()
{
    for(ll i=1; i<1000000; i++)
    {
        a[i]=i*2+(i-1);
        a[i] = a[i - 1] + a[i];
    }
}
ll index(ll srch)
{
    ll first,last,middle,ans;
    first = 0;
    last = 99999;
    middle = (first+last)/2;
    while (first <= last)
    {
        if (a[middle] < srch)
            first = middle + 1;
        else if (a[middle] == srch)
        {
            ans=middle;
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    if (first > last)
        ans= middle;
    return ans;
}

int main()
{
    card_n();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll cnt=0;
        while(1){
                if(n<2)
                    break;
                n=n-a[index(n)];
                cnt++;
        }
        cout<<cnt<<endl;
    }

}

