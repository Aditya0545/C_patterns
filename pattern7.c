// Programming to print this pattern
/*   * * * * * 
     * * * *
     * * *
     * * 
     *            */
#include <stdio.h>        // method 1
void main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            printf("*");
        }
    printf("\n");
    }
}

#include <stdio.h>      // method 2
void main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n+1-i; j++){
            printf("*");
        }
    printf("\n");
    }
}