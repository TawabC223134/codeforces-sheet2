#include<stdio.h>
int main()
{
    int ar[10010],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<=10)
        {

        printf("A[%d] = %d\n",i,ar[i]);
        }
    }
}
