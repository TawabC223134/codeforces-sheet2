#include<stdio.h>
int main()
{
    int ar[100010],i,j,n,pos1,pos2,min,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    min=ar[1];
    pos1=0;
    for(i=1;i<=n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            pos1=i;
        }
    }                  //printf("%d %d\n",pos1,min);
    max=ar[1];
    pos2=0;
    for(i=1;i<=n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            pos2=i;
        }

    }                   //printf("%d %d\n",pos2,max);
    ar[pos1]=max;
    ar[pos2]=min;
    for(i=1;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
}
