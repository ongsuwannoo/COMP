//Lab6-2
#include<stdio.h>

int calculate(int row_1, int colrow_12, int col_2)
{
    int i, j, k;
    double x;
    double result[col_2][row_1];
    double Matrix_A[row_1][colrow_12], Matrix_B[colrow_12][col_2];
    for(i=0 ; i<col_2 ; i++)
    {
        for(j=0 ; j < row_1 ; j++)
        {
            result[i][j] = 0;
        }
    }
    // Matrix A input
    for(i=0 ; i < row_1 ; i++)
    {
        for(j=0; j < colrow_12 ; j++)
        {
            scanf("%lf", &x);
            Matrix_A[i][j] = x;
        }
    }
    // Matrix B input
    for(i=0 ; i < colrow_12 ; i++)
    {
        for(j=0; j < col_2 ; j++)
        {
            scanf("%lf", &x);
            Matrix_B[i][j] = x;
        }
    }
    // processing
    for(i=0 ; i < row_1 ; i++)
    {
        for(j=0 ; j < col_2 ; j++)
        {
            for(k=0 ; k < colrow_12 ; k++)
            {
                result[i][j] += (Matrix_A[i][k]*Matrix_B[k][j]);
            }
        }
    }
    // result
    printf("A x B\n");
    for(i=0 ; i<row_1 ; i++)
    {
        for(j=0 ; j < col_2 ; j++)
        {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    /*int row_1, colrow_12, col_2;
    printf("Row Matrix A: ");
    scanf("%d", &row_1);
    printf("Colunm A and Row B: ");
    scanf("%d", &colrow_12);
    printf("Colunm Matrix B: ");
    scanf("%d", &col_2);*/
    calculate(3, 3, 3);

    return 0;
}
