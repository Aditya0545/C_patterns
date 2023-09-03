// Programming to print this pattern
/*    12345
      1234
      123
      12
      1        */
#include <stdio.h>        // method 1
void main()
{
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n+1-i; j++){
            printf("%d",j);
        }
    printf("\n");
    }
}