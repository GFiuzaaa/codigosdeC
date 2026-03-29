#include<stdio.h>
int main()
{
 float a, b, c, maior, menor, meio;
 printf("Informe os valores dos numeros:");
    scanf("%f %f %f", &a, &b, &c);
    if (a>c && a>b) 
    {maior=a;}
    else if (b>a && b>c) 
    {maior=b;}
    else maior=c;
    if (a<c && a<b) 
    {menor=a;}
    else if (b<a && b<c) 
    {menor=b;}
    else menor=c;
    meio=(a+b+c)-maior-menor;
    printf("Os numeros na ordedm crescente sao: %.2f, %.2f, %.2f! ", menor, meio, maior);
    return 0;
}
