#include <stdio.h>

int main() 

{
    int RAV[9], RAC[9], i;

    printf("Digite o RA infectado (9 dígitos): ");
     for (i = 0; i < 9; i++) {
    scanf("%1d", &RAV[i]); 

    if (RAV[i] < 000000000 || RAV[i] > 999999999)
    {
        printf("Programa encerrado, RA infectado e maior ou menor que 9 digitos"); return 0;
    }
    

    }

    RAC[0] = RAV[0]; 
    RAC[1] = RAV[1]; 
    RAC[2] = RAV[7]; 
    RAC[3] = RAV[6]; 
    RAC[4] = RAV[4]; 
    RAC[5] = RAV[5]; 
    RAC[6] = RAV[2]; 
    RAC[7] = RAV[3]; 
    RAC[8] = RAV[8];

    
    printf("RA corrigido: ");
    for (i = 0; i < 9; i++) {

        printf("%d", RAC[i]);
    }

    return 0;
}