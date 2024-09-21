/*
* * * * *
  * * *
    * 
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ansi codes for cyan color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int i=n;i>=1;--i)
    {
        for(int k=i;k<n;++k)
        {
            printf("  ");
        }
        for(int j=i*2-1;j>=1;--j)
        {
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}