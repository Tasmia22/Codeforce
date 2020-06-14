#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t;
    bool number[1000020];
    memset(number,true,sizeof(number));
    for(long long int i=2; i*i<=1000020; i++)
    {
        for(long long int j=i; i*j<=1000020; j++)
        {
            number[i*j]=false;
        }
    }

  cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a-b!=1)
            cout<<"NO"<<endl;
        else
        {
int flag=0;
            for(long long int i=2; i*i<=(a+b); i++)
            {
                if(number[i]==true && (a+b)%i==0)
                    flag=1;
            }
                    if(flag==1)
                        cout<<"NO"<<endl;
                    else
                        cout<<"YES"<<endl;
        }
    }
}
