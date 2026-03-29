//Ex2

#include<stdio.h>
int main()
{

    int i, j, a[7], b[7], c[7][2];

    for (i = 0; i < 7; i++)
    {
        printf("Digite o num (a):");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 7; i++)
    {
        printf("Digite num (b):");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 7; i++)
    {
        c[i][0] = a[i];
        c[i][1] = b[i];
    }

    printf("Elementos da matriz C:\n");
    for (i = 0; i < 7; i++)
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