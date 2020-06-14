#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if((k*k)<=n && (n+k)%2==0)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

    return 0;
}
