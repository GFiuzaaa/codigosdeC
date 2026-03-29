#include<stdio.h>
#include<string.h>

int main()
{
    char f[201], aux[201];
    int pa = 0, i, ma = 0, j, c = 0;


    printf("Digite uma frase: ");
    fgets(f, 201, stdin);

    for (i = 0; i < 201; i++)
    {
        if (f[i] != ' ' && f[i] != '\n' && f[i] != '\0')
        {
            pa++;
        }
        else{
            
            if (pa > ma)
        {
            ma = pa;
            
            for (j = 0; j < pa; j++)
        {
            aux[j] = f[c + j];
        }
        aux[j] = '\0';
        }
        
        pa = 0;
        c = i+1;}


        if (f[i] == '\0' || f[i] == '\n')
        {
            break;
        }
    }
     printf("a maior palavra e: %s\n", aux);
    return 0;
}
