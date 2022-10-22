#include<stdio.h>
int main()
{
    int ar[10010],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>0)
        {
            ar[i]=1;
        }
        else if(ar[i]<0)
        {
            ar[i]=2;
        }
        else if(ar[i]==0)
        {
            ar[i]=0;
        }
        printf("%d ",ar[i]);
    }
}
