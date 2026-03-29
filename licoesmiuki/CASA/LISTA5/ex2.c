#include<stdio.h>
int main()
{
    int a[8], b[8], x, j, i, p;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o valor: \n ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 8; i++)
    {
        b[i] = a[i] * 5;
    }

    
for (i = 0; i < 7; i++)
for (j = i + 1; j < 8; j++)
{
    if (b[i] > b[j])
    {
        x = b[i];
        b[i] = b[j];
        b[j] = x;
    }
    
}

printf("Valor em ordem crescente: \n");
for (j = 0; j < 8; j++)
{
    printf("%d\n", b[j]);
}


printf("Que valor deseja encontrar:");
scanf("%d", &p);

for (i = 0; i < 8; i++)
{
    if (p == b[i])
    {
        printf("Valor %d foi encontrado na posicao %d ( i = 0 a 7)", p, i);
    }
    
}

return 0;

}