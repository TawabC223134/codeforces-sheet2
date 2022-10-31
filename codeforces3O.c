#include<stdio.h>
int main()
{
    long long int i,n,x;

    scanf("%lld",&x);
    long long int ar[x];

    ar[0]=0;
    ar[1]=1;


    for(i=2;i<=x;i++)
    {
        ar[i]=ar[i-1]+ar[i-2];


    }
    printf("%lld\n",ar[x-1]);
}
