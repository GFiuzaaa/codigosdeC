#include<stdio.h>

int main()
{
    float A, AP, LP, AA, LA;
    printf("Informe o valor da altura da parede : ");
    scanf("%f", &AP);
    printf("Informe o valor de largura da parede: ");
    scanf("%f", &LP);
    printf("Informe o valor da altura do azulejo: ");
    scanf("%f", &AA);
    printf("Informe o valor de largura do azulejo: ");
    scanf("%f", &LA);
    A=(AP*LP)/(AA*LA);
    printf("A quantidadde de azulejos necessarios e: %.2f", A);
    return 0;
}