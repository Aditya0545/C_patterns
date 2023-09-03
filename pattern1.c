// Programming to print n star in a line 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows\n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        printf("*");
    return 0;
}