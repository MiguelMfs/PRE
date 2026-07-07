#include <stdio.h>

int TipoTriangulo(float x, float y, float z)
{
    // Verifica se forma um triângulo
    if ((x < y + z) && (y < x + z) && (z < x + y))
    {
        if (x == y && y == z)
            return 1; // Equilátero
        else if (x == y || x == z || y == z)
            return 2; // Isósceles
        else
            return 3; // Escaleno
    }

    return 0; // Não forma triângulo
}

int main()
{
    int opcao, resultado;
    float x, y, z;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Identificar Triangulo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("Digite o lado X: ");
            scanf("%f", &x);

            printf("Digite o lado Y: ");
            scanf("%f", &y);

            printf("Digite o lado Z: ");
            scanf("%f", &z);

            resultado = TipoTriangulo(x, y, z);

            if (resultado == 1)
                printf("\nTriangulo Equilatero.\n");
            else if (resultado == 2)
                printf("\nTriangulo Isosceles.\n");
            else if (resultado == 3)
                printf("\nTriangulo Escaleno.\n");
            else
                printf("\nOs valores informados nao formam um triangulo.\n");
        }

    } while (opcao != 0);

    printf("\nPrograma encerrado.\n");

    return 0;
}
