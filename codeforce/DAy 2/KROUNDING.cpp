#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    double p;
    cin>>n>>k;
    int i=1;
    p=pow(10,k);
    while(1)
    {
        if((n*i)%(long long int)p==0)
            break;
        i++;
    }
   cout<<n*i<<endl;

}
