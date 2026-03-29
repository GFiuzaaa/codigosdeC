#include <stdio.h>

int main() 

{
    int RA[9], RAg[9], i;

    printf("Digite o RA infectado (9 dígitos): ");
     for (i = 0; i < 9; i++) {
    scanf("%1d", &RA[i]); 

    if (RA[i] < 000000000 || RA[i] > 999999999)
    {
        printf("Programa encerrado, RA infectado e maior ou menor que 9 digitos"); return 0;
    }
    

    }

    RAg[0] = RA[1]; 
    RAg[1] = RA[0]; 
    RAg[2] = RA[2]; 
    RAg[3] = RA[3]; 
    RAg[4] = RA[4]; 
    RAg[5] = RA[5]; 
    RAg[6] = RA[6]; 
    RAg[7] = RA[8]; 
    RAg[8] = RA[7];

    
    printf("RA corrigido: ");
    for (i = 0; i < 9; i++) {

        printf("%d", RAg[i]);
    }

    return 0;
}