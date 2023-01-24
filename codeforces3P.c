#include<stdio.h>
int main()
{
    int i,n,f,cnt;
    scanf("%d",&n);
    int ar[n];
    f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

    }


    f=0;
    cnt=0;
    while(f==0)
    {
        for(i=0;i<n;i++)
        {
            if(ar[i] % 2 == 0)
            {
                ar[i]=ar[i]/2;
            }
            else
            {
                f=1;
                break;
            }

        }
        cnt++;

    }
    printf("%d\n",cnt-1);   ///while loop ghurar time e cnt 1 bar
                            ///beshi kore feltese.tai 1 minus korte hobe

}
