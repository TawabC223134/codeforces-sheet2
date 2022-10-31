#include<stdio.h>
int main()
{
    int r,c,i,j,x,f;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    scanf("%d",&x);

    f=0;
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {

            if(ar[i][j]==x)
            {
               f=1;
               break;
            }

        }
    }
    if(f==1)
    {
        printf("will not take number\n");

    }
    else
        {
           printf("will take number\n");
        }


}
