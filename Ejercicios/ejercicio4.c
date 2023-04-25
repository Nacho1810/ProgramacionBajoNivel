#include <stdio.h>

int main()
{

    // prueba float numeros[3] = {3,6,110};

    float numeros[3];

    printf("ingrese 3 numeros dejando espacios: ");
    scanf("%f %f %f", &numeros[0], &numeros[1], &numeros[2]);
    float suma = 0;
    for (int i = 0; i < sizeof(numeros) / sizeof(int); i++)
    {

        suma += numeros[i];

    }


    float promedio= suma /3;
    printf("Suma: %f\n", suma);
    printf("El promedio es: %f", promedio);


    return 0;
   
}