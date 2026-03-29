#include <stdio.h>

int main() 

{
    int RAi[9], RAn[9], i;

    printf("Digite o RA infectado (9 dígitos): ");
     for (i = 0; i < 9; i++) {
    scanf("%1d", &RAi[i]); 

    if (RAi[i] < 000000000 || RAi[i] > 999999999)
    {
        printf("Programa encerrado, RA infectado e maior ou menor que 9 digitos"); return 0;
    }
    

    }

    RAn[0] = RAi[0]; 
    RAn[1] = RAi[1]; 
    RAn[2] = RAi[2]; 
    RAn[3] = RAi[3]; 
    RAn[4] = RAi[4]; 
    RAn[5] = RAi[8]; 
    RAn[6] = RAi[7]; 
    RAn[7] = RAi[6]; 
    RAn[8] = RAi[5];

    
    printf("RA corrigido: ");
    for (i = 0; i < 9; i++) {

        printf("%d", RAn[i]);
    }

    return 0;
}