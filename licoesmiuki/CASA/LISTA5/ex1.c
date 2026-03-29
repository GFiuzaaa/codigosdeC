#include<stdio.h>
int main()
{
    int a[12], x, j, i;

    for (i = 0; i < 12; i++)
    {
        printf("Digite o valor: \n ");
        scanf("%d", &a[i]);
    }
    
for (i = 0; i < 11; i++)
{
for (j = i + 1; j < 12; j++)
{
    if (a[i] < a[j])
    {
        x = a[i];
        a[i] = a[j];
        a[j] = x;
    }
    
}
}

printf("Valor em ordem decrescente:");
for (j = 0; j < 12; j++)
{
    printf("\n %d \n", a[j]);
}

return 0;

}