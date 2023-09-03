// Programming in c to print m rows and n column * like this 5 rows and 4 column
/*        * * * *
          * * * * 
          * * * * 
          * * * * 
          * * * *       */
#include <stdio.h>
int main()
{
    int m,n;
    printf("\nEnter the no. of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}