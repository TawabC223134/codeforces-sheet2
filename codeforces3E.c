#include<stdio.h>
int main()
{
    int ar[10010],i,n,x,q;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);

    }
    x=ar[1];
    q=1;
    for(i=1;i<=n;i++)
    {


        if(ar[i]<x)
        {
            x=ar[i];
            q=i;
        }
    }
    printf("%d %d\n",x,q);
}
