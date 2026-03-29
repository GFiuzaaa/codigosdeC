//4

#include<stdio.h>
int main()
{
    int a[5][5], L[5], C[5], i, j;


    for (i = 0; i < 5; i++) {

    printf("Digite os 5 elementos da linha %d:\n", i + 1);

    for (j = 0; j < 5; j++) { 

            printf("Matriz[%d][%d]: ", i + 1, j + 1);

            scanf("%d", &a[i][j]);

        }}
    
    for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
    {
        L[i] += a[i][j];
        C[j] += a[i][j];

    }

    for (i = 0; i < 5; i++)
    {
        printf("Soma da linha %d: %d\n", i+1, L[i]);
    }

    for (j = 0; j < 5; j++)
    {
        printf("Soma da coluna %d: %d\n", j+1, C[j]);
    }
    
    return 0;
}
