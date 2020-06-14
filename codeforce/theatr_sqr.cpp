#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a,x,y;
    scanf("%lf%lf%lf",&n,&m,&a);
    x=ceil(n/a);
    y=ceil(m/a);
    printf("%.0lf",x*y);
}
