#include<stdio.h>
int main()
{
float a, b, c;
printf("Informe os valores:");
scanf("%f %f", &a, &b);
c=a;
a=b;
b=c;
printf("Os valores trocados sao: %.2f %.2f", a, b);
return 0;
}