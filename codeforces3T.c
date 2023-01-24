#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,sum1=0,sum2=0,sum;
    scanf("%d",&n);
    int ar[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        sum1+=ar[i][j];
    }
   for(i=0,j=n-1;i<n;i++,j--)
   {
       sum2+=ar[i][j];
   }
   sum = abs(sum1-sum2);
   printf("%d\n",sum);


}
