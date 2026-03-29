//3

#include<stdio.h>

int main()
{
    int a[10], i, j, aux;

    printf("Digite 10 numeros\n");
for (i = 0; i < 10; i++)
{
    scanf("%d", &a[i]);
}


for (i = 0; i < 10; i++)
for (j = i + 1; j < 10; j++)
{
    if (a[i] > a[j])
    {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
    }
    
}

printf("Numeros em ordem crescente:\n");
for (i = 0; i < 10; i++)
{
    printf("%d \n", a[i]);
}

int p;
printf("Que numero desejaa pesquisar?\n");
scanf("%d", &p);


for (i = 0; i < 10; i++)
{
    if (p == a[i])
    {
        printf("%d foi encontrado na posicao %d\n", p, i);
    }
}


return 0;

}