// Print this pattern 
/*    1
      12
      123
      1234      */
#include <stdio.h>
void main()
{
    int n;
    printf("\nEnter the no. : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}