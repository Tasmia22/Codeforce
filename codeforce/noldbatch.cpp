#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> num;
    long long int n,k,b;
   long long  int cnt=0;
    cin>>n>>k;
    bool number[n+1];
    memset(number,true,sizeof(number));
    for(long long int i=2; i*i<=n; i++)
    {
        for(long long int j=i; i*j<=n; j++)
        {
            number[i*j]=false;
        }
    }

    for(long long int i=2; i<=n; i++)
    {
        if(number[i]==true)
            num.push_back(i);
    }
    for(long long int i=0;i<num.size();i++)
    {

        b=num[i]+num[i+1]+1;
        if(b<=n && number[b]==true)
             {
               //  cout<<"prime "<<num[i]<<" & "<<"prime "<<num[i+1]<<"   ";
                 //cout<<num[i]+num[i+1]+1<<endl;
                 cnt++;
                //cout<<cnt<<endl;
             }
    }
    if(cnt>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
