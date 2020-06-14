#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
            printf("I hate that ");
        else
             printf("I love that ");
    }
    if(n%2==0)
         printf("I love it ");
    else
         printf("I hate it ");
}
