#include<stdio.h>
int main()
{
    int ar[100010],i,n,x=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    x=ar[0];
    for(i=0;i<n;i++)
    {

        if(ar[i]<x)
        {
            x=ar[i];
        }

    }

    for(i=0;i<n;i++)
    {
        if(x==ar[i])
        {
            cnt++;
        }
    }


    if(cnt%2==0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

}
