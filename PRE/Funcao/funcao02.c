#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sorteio()
{
    return (rand() % 10) + 1;
}

int main()
{
    int cont[11] = {0};
    int numero, i;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        numero = Sorteio();
        cont[numero]++;
    }

    printf("Resultado dos sorteios:\n\n");

    for (i = 1; i <= 10; i++)
    {
        printf("Numero %d: %d vezes\n", i, cont[i]);
    }

    return 0;
}
