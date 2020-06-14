#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,x,y;
    scanf("%d%d%d",&n,&m,&a);
    x=ceil(n/a);
    y=ceil(m/a);
    printf("%d",x*y);
}
