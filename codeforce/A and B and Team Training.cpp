#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    if(n==0 ||m==0)
       {
    cout<<0;
    return 0;
       }
    else
    {
        if((m/n)>=2)
            cout<<n;
        else if((n/m)>=2)
            cout<<m<<endl;
        else
            cout<<(n+m)/3<<endl;
    }
    return 0;
}
