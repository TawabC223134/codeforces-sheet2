#include<stdio.h>
int main()
{
    long long ar[100010],i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=n;i>0;i--)
    {
        printf("%d ",ar[i]);
    }
}
