//2

#include<stdio.h>

int main()
{
    int a[15], i, j, aux;

    printf("Digite 15 numeros\n");
for (i = 0; i < 15; i++)
{
    scanf("%d", &a[i]);
}


for (i = 0; i < 14; i++)
for (j = i + 1; j < 15; j++)
{
    if (a[i] > a[j])
    {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
    }
    
}

printf("Numeros em ordem crescente:\n");
for (i = 0; i < 15; i++)
{
    printf("%d \n", a[i]);
}

return 0;

}