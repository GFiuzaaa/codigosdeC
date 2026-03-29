#include<stdio.h>
#include<math.h>
int main()
{
    int X;
    printf("Informe o valor de X:");
    scanf("%i", &X);
    if (X%2==0)
    {
        printf("O numero e par");
    }
    else
    printf("O numero e impar");
    return 0;
}