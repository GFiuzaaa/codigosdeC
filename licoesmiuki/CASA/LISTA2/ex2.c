#include<stdio.h>
int main()
{
 int ND, NC, D;
 NC = 20;
 printf("Informe o valor do numero:");
    scanf("%d", &ND);
if (ND>0 && ND<100)
{
   if (ND>NC)
   {D=ND-NC;}
   else D=NC-ND;
   printf("A distancia entre os dois numeros e: %d", D);
}
else printf("Numero digitado invalido!");
return 0;
}
