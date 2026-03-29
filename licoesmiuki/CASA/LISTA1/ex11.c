#include<stdio.h>
int main()
{
float a, b;
printf("Informe os valores:");
scanf("%f %f", &a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("Os valores trocados sao: %.2f %.2f", a, b);
return 0;
}