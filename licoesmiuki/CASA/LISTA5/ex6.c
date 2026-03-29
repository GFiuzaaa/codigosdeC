#include<stdio.h>
int main()
{
    int a[3], b[3], i, p;

    for(i = 0; i < 3; i++)
    {
        printf("Valor de A:");
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < 3; i++)
    {
        b[i] = a[i] * a[i];
    }
    

    for(i = 0; i < 3; i++)
    {
        printf("Valores de B: %d\n", b[i]);
    }
    

    printf("Que numero deseja pesquisar:");
    scanf("%d", &p);


    for(i = 0; i < 3; i++)
    {
        if (p == b[i])
        {
           printf("%d foi encontrado na posicao %d", p, i);
        }
        
    }
    

return 0;

}