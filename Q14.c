/*
    *
  * * *
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
    for( int i=1;i<n*2;++i)
    {
        if(i<=n)
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
        else
        {
            for(int k=i-n;k>=1;--k)
            {
                printf("  ");
            }
            for(int j=(i-n)*2-1;j<=(n-1)*2-1;++j)
            {
                printf("* ");
            }
            printf("\n");
        }
    
    }
    return 0;
}