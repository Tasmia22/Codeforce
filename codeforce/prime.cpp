#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j;
    double p;
    p=pow(10,6);
    for(i=2; i<=p; i++)
    {
        int flag=0;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
                {flag=1;
                break;
                }
        }
        if(flag==0)
            cout<<i<<" ";
    }
    cout<<endl;
}
