#include<stdio.h>
int main()
{
    int a[4], i, j, p, x;

    for(i = 0; i < 4; i++)
    {
        printf("Valor de A:");
        scanf("%d", &a[i]);
    }
    
    
    for(i = 0; i < 4; i++)
    for (j = 0; j < 4; j++)
    {
        if (a[i] < a[j])
        {
            x = a[i];
            a[i] = a[j];
            a[j] = x;
        }
    }



    for(i = 0; i < 4; i++)
    {
        printf("Valores das notas em ordem crescente: %d\n", a[i]);
    }
    

    printf("Que numero deseja pesquisar:");
    scanf("%d", &p);


    for(i = 0; i < 4; i++)
    {
        if (p == a[i])
        {
           printf("%d foi encontrado na posicao %d", p, i);
        }
        
    }
    

return 0;

}