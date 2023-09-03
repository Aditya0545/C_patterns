// Programming to print n star vertically
/*  *
    *
    *
    * 
    * 
    * 
    *    */
#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the number of star to print vertically\n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("*\n");
    return 0;
}