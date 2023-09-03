// Programming to print this pattern 
/*     12345
       12345
       12345
       12345         */
#include <stdio.h>
void main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}