#include<stdio.h>

int main()
{

    int a[20], cont[10] = {0}, i;


    printf("Digite 20 numeros\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] < 0 || a[i] > 9)
        {
            printf("Num deve ser maior que 0 e menor que 9"); break;
        }

            cont[a[i]]++;
    }
    
  for (int i = 0; i < 10; i++) {
        printf("O numero %d aparece %d vez(es)\n", i, cont[i]);
    }

    return 0;



}