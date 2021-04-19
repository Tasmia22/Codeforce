#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                b[i]=a[i+1]*(-1);
            else
                b[i]=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
