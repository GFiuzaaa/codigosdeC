#include<stdio.h>
int main()
{
    int a[2], b[3], c[5], i, j, x;

    for(i = 0; i < 2; i++)
    {
        printf("Valor de A:");
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("Valor de B:");
        scanf("%d", &b[i]);
    }      


for(i = 0; i < 5; i++)
{
    c[i] = a[i];
}

for(i = 0; i < 5; i++)
{
    c[i+2] = b[i];
}

    for(i = 0; i < 5; i++)
    for(j = 0; j < 5; j++)
    {
        if (c[i] > c[j])
        {
        x = c[i];
        c[i] = c[j];
        c[j] = x;
        }
    }


    for(i = 0; i < 5; i++)
    {
        printf("Valores de C: %d\n", c[i]);
    }
    
return 0;
}