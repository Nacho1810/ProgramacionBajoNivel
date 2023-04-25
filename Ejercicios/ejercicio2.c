#include <stdio.h>

int main(int argc, char const *argv[])
{
    int listado[] = {3, 4, 5, 6, 2, -9, 13};

    int max = listado[0];

    for (int i = 0; i < sizeof(listado) / sizeof(int); i++)
    {
        if(max<listado[i]){
            max = listado[i];
        }
        /* code */
    }

    printf("El mayor es: %d", max);
    
    return 0;
}
