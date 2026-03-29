#include<stdio.h>
int main()
{
float A, B, L, P;
printf("Informe os valores:");
scanf("%f %f", &B, &L);
P=2*L+2*B;
A=L*B;
printf("Os valores de P e A sao: %.2f %.2f", A, P);
return 0;
}