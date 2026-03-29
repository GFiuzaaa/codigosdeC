#include<stdio.h>
int main()
{
    int a[2], b[2], i, j, p, x;

    for(i = 0; i < 2; i++)
    {
        printf("Valor de A:");
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < 2; i++)
    {
        b[i] = a[i] + 2;
    }
    
    for(i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
    {
        if (b[i] > b[j])
        {
            x = b[i];
            b[i] = b[j];
            b[j] = x;
        }
    }



    for(i = 0; i < 2; i++)
    {
        printf("Valores de B em ordem decrescente e somados 2: %d\n", b[i]);
    }
    

    printf("Que numero deseja pesquisar:");
    scanf("%d", &p);


    for(i = 0; i < 2; i++)
    {
        if (p == b[i])
        {
           printf("%d foi encontrado na posicao %d", p, i);
        }
        
    }
    

return 0;

}