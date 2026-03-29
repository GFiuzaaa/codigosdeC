#include<stdio.h>
int main()
{
float V, A, R;
printf("Informe o valor do raio:");
scanf("%f", &R);
V=(4.0/3.0)*3.14159*(R*R*R);
A= 4*3.14159*(R*R);
printf("Os valores do volume e da área são: %.2f %.2f", V, A);
return 0;
}