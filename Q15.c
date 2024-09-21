/*
* * * *
* * *
* *
*
* *
* * *
* * * *
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
            printf("\n");
        }
        else
        {
            for(int j=n-i+1;j>=0;--j)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}