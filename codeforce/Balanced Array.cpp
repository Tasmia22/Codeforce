#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if((n/2)%2!=0)
            cout<<"NO"<<endl;
        else
        {
            long long int sum=0;
            cout<<"YES"<<endl;
            for(long long i=1; i<=(n/2); i++)
            {
                sum=sum+(2*i);
                cout<<2*i<<" ";
            }
            long long int news=0;
            for(long long i=0; i<(n/2)-1; i++)
            {
                news=news+(2*i)+1;
                cout<<(2*i)+1<<" ";
            }
            cout<<sum-news<<endl;
        }
    }
}
