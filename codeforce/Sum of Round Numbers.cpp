#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i=1,cnt=0;

        int p=n;
        while(p!=0)
        {
            if(p%10) cnt++;
            p=p/10;
        }
        cout<<cnt<<endl;

        while(n)
        {
            int N=n%10;
            if(N)
            {
                cout<<N*i<<" ";
            }
            n=n/10;
            i*=10;
        }
        cout<<endl;
    }
}

