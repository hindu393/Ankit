#include <stdio.h>

int main()
{
    int rows;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - 1; j++)
        {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
       }
    return 0;
}
