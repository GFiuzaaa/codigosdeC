//Ex4

#include <stdio.h>

int main()
{
    int i, j, a[4], b[4], c[4][2];

    for (i = 0; i < 4; i++)
    {
        printf("Digite o num (a):");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 4; i++)
    {
        printf("Digite num (b):");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 4; i++)
    {
        c[i][0] = a[i] * 2;
        c[i][1] = b[i] - 5;
    }

    printf("Elementos do matriz C:\\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
            if (j % 2 == 1)
            {
                printf("\n ");
            }
        }
    }
}