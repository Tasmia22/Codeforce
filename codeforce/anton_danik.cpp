#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,a=0,d=0;
    cin >> s;
    char *A = new char[s];
    for(int i=0; i<s; i++)
    {
        cin>>A[i];
        if(A[i]=='A')
           {
           a++;
           }
        else if(A[i]=='D')
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if (d>a)
        cout<<"Danik";
    else
        cout<<"Friendship" ;
}
