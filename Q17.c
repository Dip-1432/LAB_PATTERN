/*
* * * * * * *
* * *   * * *
* *       * *
*           *
* *       * *
* * *   * * *
* * * * * * *
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ansi codes for cyan color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=n*2;i>1;--i)
    {
        if(i>n)
        {
            for(int j=1;j<=i-n;j++)
            {
                printf("* ");
            }
             for(int k=n-1;k>i-n;--k)
            {
                printf("  ");
            }
            for(int k=n;k>i-n;--k)
            {
                printf("  ");
            }
            for(int j=1;j<=i-n;++j)
            {
                if(i==n*2&&j==1)
                    continue;
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(int j=n-i+1;j>=0;--j)
            {
                printf("* ");
            }
            for(int k=1;k<i-2;++k)
            {
                printf("  ");
            }
            for(int k=1;k<i-1;++k)
            {
                printf("  ");
            }
            for(int j=n;j>i-2;--j)
            {
                if(j==n&& i==2)
                    continue;
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}