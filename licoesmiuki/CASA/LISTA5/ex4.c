#include<stdio.h>
int main()
{
    int a[12], b[12],c[12],  x, j, i;

    for (i = 0; i < 12; i++)
    {
        printf("Digite o valor de a: \n ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 12; i++)
    {
        printf("Digite o valor de b: \n ");
        scanf("%d", &b[i]);
    }

// ordenação do a

    for (i = 0; i < 12; i++)
    for (j = 0; j < 12; j++)
    {
        if (a[i] < a[j])
        {
        x = a[i];
        a[i] = a[j];
        a[j] = x;
        }
    }

//ordenação do b

    for(i = 0; i < 12; i++)
    for (j = 0; j < 12; j++)
    {
        if (b[i] < b[j])
        {
            x = b[i];
            b[i] = b[j];
            b[j] = x;
        }
    }

// c = a+b e ordenação
    for (i = 0; i < 12; i++)
    {
        c[i] = a[i] + b[i];
    }
    

    for(i = 0; i < 12; i++)
    for (j = 0; j < 12; j++)
    {
        if (c[i] < c[j])
        {
            x = c[i];
            c[i] = c[j];
            c[j] = x;
        }
    }


        
    for (j = 0; j < 12; j++)
    {
        printf("Ordem crescente de a: %d\n", a[j]);
    }

    for (j = 0; j < 12; j++)
    {
        printf("\n Ordem crescente de b: %d\n", b[j]);
    }

    for (j = 0; j < 12; j++)
    {
        printf("\n \n Ordem crescente e soma de c: %d\n", c[j]);
    }
    return 0;
}