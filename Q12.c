/*
    *
  * * *
* * * * *
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ansi codes for cyan color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        for(int k=n;k>i;--k)
        {
            printf("  ");
        }
        for(int j=0;j<=(i-1)*2;++j)
        {
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}