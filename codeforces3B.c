#include<stdio.h>
int main()
{

    int ar[100010],i,j,f,n,x,p;
    scanf("%d",&n);
    f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&x);
        for(j=0;j<n;j++)
        {

        if(x==ar[j])
        {
            f=1;
            p=j;
            break;
        }
        }
        if(f==1)
        {
            printf("%d\n",j);
        }
        else
        {
            printf("-1\n");
        }




}
