#include <stdio.h>

int Maior(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int n1, n2, n3, n4;
    int maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    maior = Maior(n1, n2);
    maior = Maior(maior, n3);
    maior = Maior(maior, n4);

    printf("\nO maior numero é: %d\n", maior);

    return 0;
}
