#include<stdio.h>
int main()
{
    int i,j,a,b,n,x,t,max;
    scanf("%d",&t);
    for(b=1;b<=t;b++)
    {
    scanf("%d",&n);
    int ar[n];
    max=ar[0];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(x=1;x<=n;x++)    //x is size of subarray.x = 1 2 3 ....n
    {
        for(a=0;a<=(n-x);a++)
        {
            max=ar[a];    //array starts from a.tai ar[a] hoise.
            for(j=a;j<(a+x);j++)
            {

                if(ar[j]>max)
            {
                max=ar[j];
            }
            }
            printf("%d ",max);


        }
    }
    printf("\n");
    }
    return 0;
}
