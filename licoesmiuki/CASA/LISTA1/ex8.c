#include<stdio.h>
int main()
{
float M, N1, N2, N3, N4;
printf("Informe os valores:");
scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
M=(N1+N2+N3+N4)/4;
printf("A media e: %.2f", M);
return 0;
}