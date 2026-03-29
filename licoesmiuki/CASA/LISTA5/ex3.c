#include<stdio.h>
int main()
{
    int a[5], b[5], x, j, i, fat;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor: \n ");
        scanf("%d", &a[i]);
    }

    
for (i = 0; i < 5; i++) {
        fat = 1;
        for (int f = a[i]; f >= 1; f--) {
            fat *= f;
        }
        b[i] = fat;
    }



for (i = 0; i < 5; i++)
for (j = i + 1; j < 5; j++)
{
    if (b[i] > b[j])
    {
        x = b[i];
        b[i] = b[j];
        b[j] = x;
    }
    
}

printf("Valor em ordem crescente: \n");
for (j = 0; j < 5; j++)
{
    printf("%d\n", b[j]);
}


return 0;

}