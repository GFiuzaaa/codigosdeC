#include<stdio.h>
int main()
{
float p1, p2, ATV, M;
printf("Informe os valores:");
scanf("%f %f %f", &p1, &p2, &ATV);
M=(p1*4+p2*4+ATV*2)/10;
printf("A media e: %.2f", M);
return 0;
}