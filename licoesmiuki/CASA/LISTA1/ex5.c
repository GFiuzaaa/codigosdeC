#include<stdio.h>
int main()
{
float KG, H, i;
printf("Informe os valores:");
scanf("%f %f", &KG, &H);
i=KG/(H*H);
printf("O valor do IMC e: %.2f", i);
return 0;
}