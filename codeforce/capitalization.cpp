#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int len;
    len=strlen(s);
    if(s[0]>=97 && s[0]<=122)
    {
        s[0]=(char)((int)s[0]-32);
    }
    for(int i=0; i<len; i++)
        cout<<s[i];

      return 0;
}
