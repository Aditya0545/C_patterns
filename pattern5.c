// Programming to print this pattern 
/*      * 
        * *
        * * *
        * * * *
        * * * * *      */
#include <stdio.h>
void main()
{
    int n;
    printf("\nEnter the no. : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}