//Ex1

#include <stdio.h>
int main()
{

    int i, j, a[3][5], b[3][5], c[3][5];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o num (a):");
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite num (b):");
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Soma: %d\n", c[i][j]);
        }
    }
}