#include<stdio.h>
int main()
{
    int ar[100010],i,j,n,t,a;
    long long sum1,sum;
    scanf("%d",&t);
    sum=0;

    for(a=1;a<=t;a++)
    {
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i==1;i++)
    {
        for(j=(i+1);j<=(i+1);j++)
        {
            sum1=ar[i]+ar[j]+j-i;
        }
    }

    for(i=1;i<n;i++)
    {

        for(j=(i+1);j<=n;j++)
        {
          sum=ar[i]+ar[j]+j-i;
          if(sum<sum1)
        {
            sum1=sum;


        }

        }
    }
    printf("%lld\n",sum1);

    }


}
