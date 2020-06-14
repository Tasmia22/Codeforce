#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        int newa,newb;
        cin>>a>>b>>x>>y;
        newa=max(x,a-x-1)*b;
        newb=max(y,b-y-1)*a;
        cout<<max(newa,newb)<<endl;

    }
return 0;
}
