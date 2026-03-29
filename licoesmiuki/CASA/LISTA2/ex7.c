#include<stdio.h>
int main()
{
    int curso;
    printf("Digite um numero de 1 a 5:");
    scanf("%d", &curso);
    switch (curso) 
    {
        case 1: printf("Engenharia");break;
        case 2: printf("Edificacoes"); break;
        case 3: printf("Sistemas Eletricos"); break;
        case 4: printf("Turismo"); break;
        case 5: printf("Analise de Sistemas"); break;
        default: printf("Curso invalido, digite um numero valido!"); break;
    }
    return 0;
}