#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,k;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n>>k;
        //EVEN
        if(n%2==0 && n/k>=2)
        {
            cout<<"YES"<<endl;
            while(k-1)
            {
                cout<<2<<" ";
                n-=2;
                k--;
            }
            cout<<n<<endl;
        }
        else   if(n%2==0 && n/k<2 && n!=k)
            cout<<"NO"<<endl;
        //n,k both ODD
        else if ((n%2!=0 && k%2!=0 ) || (n==k))
        {
            cout<<"YES"<<endl;
            while(k-1)
            {
                cout<<1<<" ";
                n-=1;
                k--;
            }
            cout<<n<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
