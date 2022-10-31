#include<stdio.h>
int main()
{
    int ar[1000010],i,n,x,sum;
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%1d",&ar[i]);



    }
    for(i=1;i<=n;i++)
    {
        sum+=ar[i];
    }

    printf("%d\n",sum);
    return 0;

}
