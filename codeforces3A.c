 #include<stdio.h>
int main()
{
    long long int ar[100010],n,i,sum;
    scanf("%lld",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&ar[i]);
        sum+=ar[i];

    }



        if(sum<0)
        {
            sum=sum*(-1);
            printf("%lld\n",sum);
        }
        else
        {
            printf("%lld\n",sum);
        }



    return 0;
}
