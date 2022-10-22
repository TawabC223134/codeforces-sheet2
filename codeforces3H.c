#include<stdio.h>
int main()
{
    int ar[100010],i,j,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[j+1]<ar[j])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
