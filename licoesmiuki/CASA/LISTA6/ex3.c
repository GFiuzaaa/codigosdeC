//ex3

#include <stdio.h>

int main()
{
    int i, j, fat, a[10], b[10][3];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o num (a):");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        b[i][0] = a[i] + 5;
    }

    for (i = 0; i < 10; i++)
    {
        fat = 1;
        for (j = 1; j <= a[i]; j++)
        {
            fat = fat * j;
        }
        b[i][1] = fat;
    }

    for (i = 0; i < 10; i++)
    {
        b[i][2] = a[i] * a[i];
    }

    printf("Elementos da matriz B:\\n");
    for (i = 0; i < 10; i++)
    {
        printf("B na coluna 0: %d\\n", b[i][0]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("B na coluna 1: %d\\n", b[i][1]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("B na coluna 2: %d\\n", b[i][2]);
    }

    return 0;
}