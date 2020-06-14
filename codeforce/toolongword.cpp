#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    char s[100];
    while(n--)
    {
        cin>>s;
        p=strlen(s);
        if(p>10)
            cout<<s[0]<<p-2<<s[p-1]<<endl;
       else
        cout<<s<<endl;
    }
}
