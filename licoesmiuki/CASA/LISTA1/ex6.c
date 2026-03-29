#include<stdio.h>
int main()
{
float A, C, R;
printf("Informe o valor do raio:");
scanf("%f", &R);
A=3.14159*(R*R);
C=2*3.14159*R;
printf("Os valores da area e do comprimento sao: %.2f %.2f", A, C);
return 0;
}