#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool number[1000000];
    memset(number,true,sizeof(number));
    for(int i=2; i*i<=1000000; i++)
    {
        for(int j=i; i*j<=1000000; j++)
        {
            number[i*j]=false;
        }
    }

    for(int i=2; i<=30; i++)
    {
        if(number[i]==true)
            cout<<i<<"   ";
    }
}
