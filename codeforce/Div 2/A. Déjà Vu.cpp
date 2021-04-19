#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool palindrome(string s)
{
            for (int i=0;i<=s.size()/2;i++)
        {
            if(s[i]==s[s.size()-1-i])
                return false;
        }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=1;
        for (int i=0;i<=s.size()/2;i++)
        {
            if(s[i]!='a')
                flag=0;
        }
        if(flag)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(s[s.size()-1]!='a')
            cout<<"a"<<s<<endl;
            else
                cout<<s<<"a"<<endl;

        }
    }
}
