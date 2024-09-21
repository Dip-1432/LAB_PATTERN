/*
1
0 1 
0 1 0
1 0 1 0
*/
#include<stdio.h>
int main()
{
    printf("\033[36;1m");  //ansi codes for cyan color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    int d=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("%d ",d);
            d=!d;
        }
    printf("\n");
    }
    return 0;
}