#include<iostream>
using namespace std;
main()
{
    int n,m,i=0;
    int a[]= { 2,3, 5 , 7,11 ,13,17 ,19 ,23, 29,31, 37,41,43,47};
    cin>>n>>m;
    while(a[i]!=n)
        i++;
    if (a[i+1]==m)
        cout<<"YES";
    else
        cout<<"NO";
}
