#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,m,a;
    while(scanf("%lf%lf%lf",&n,&m,&a)==3)
    {
        printf("%.0lf\n",ceil(n/a)*ceil(m/a));
    }
    return 0;
}
