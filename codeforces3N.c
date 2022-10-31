#include<stdio.h>
#include<string.h>
int main()
{
    char str[27];
    int i,x,y,yes,l;
    yes=1;
    scanf("%d%d",&x,&y);
    scanf("%s",str);
    if(str[x]!='-')
    {
        printf("No\n");
    }
    else
    {

        l=strlen(str);
        for(i=0;i<l;i++)
        {
            if(i!=x && (str[i]<'0' || str[i]>'9'))
            {
                yes=0;
            }
        }
        if(yes==0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }



    }

}
