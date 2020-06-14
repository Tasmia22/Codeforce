#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,n;

    bool number[1000000];
    memset(number,true,sizeof(number));
    for(int i=2; i*i<=1000000; i++)
    {
        for(int j=i; i*j<=1000000; j++)
        {
            number[i*j]=false;
        }
    }
    cin>>n;
    for(long long int i=1; i<=n; i++)
    {
        cin>>x;
        y=sqrt(x);
        if(sqrt(x)>y || x==1)
            cout<<"NO"<<endl;
        else
        {
            if(number[y]==true)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
