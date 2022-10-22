#include<stdio.h>
int main()
{
    long long ar[100010],i,j,n,x,y;
    scanf("%lld",&n);

while(x>0)
{

        for(i=1;i<=n;i++)
    {
       scanf("%lld",&ar[i]);
       x=ar[i];
    }
    for(j=n;j>0;j--)
    {
        y=ar[j];

    }
    if(x==y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}
}
