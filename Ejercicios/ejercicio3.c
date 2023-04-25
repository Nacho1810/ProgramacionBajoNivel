#include <stdio.h>

int main(int argc, char const *argv[])
{

    // pruebas
    int listado[] = {3, 4, 5, 6, 2, -9, 13};

    int min= listado[0];

    for (int i = 0; i < sizeof(listado) / sizeof(int); i++)
    {
        if(min>listado[i]){
            min = listado[i];
        }
        /* code */
    }

    printf("El menor es: %d", min);
    
    return 0;
   
}
