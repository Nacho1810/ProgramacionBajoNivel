#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Ingrese un número: ");
    scanf("%d3", &numero);

    if (numero % 2 == 0)
    {
        printf("Felicidades. Su numero es par.");
    }
    else
    {
        printf("Su número no es par.");
    }

    return 0;
}