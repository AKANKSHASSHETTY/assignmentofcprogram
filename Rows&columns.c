#include <stdio.h>

void main()
{
    int i, j, row, column;
    int matrix[row][column];

    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &column);

    for (i=0; i<row; i++)
        {
        for (j=0; j<column; j++)
        {
            if(i%2 != 0 || j%2 != 0)
            {
                printf("1\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
}
}
