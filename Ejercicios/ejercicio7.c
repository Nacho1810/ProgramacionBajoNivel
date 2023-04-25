#include <stdio.h>
int main()
{
    int num;
    printf("Menu\n");
    printf("1.Opcion 1\n");
    printf("2.Opcion 2\n");
    printf("3.Opcion 3\n");
    printf("4.Salir\n");

    while (num != 4)
    {
        scanf("%d", &num);

        if (num == 1)
        {
            printf("Usted ingreso a la opción 1\n");
        }
        else if (num == 2)
        {
            printf("Usted ingreso a la opción 2\n");
        }
        else if (num == 3)
        {
            printf("Usted ingreso a la opción 3\n");
        }
        else if (num == 4)
        {
            printf("Ha salido del menú\n");
        }
        else
        {
            printf("Opción incorrecta\n");
        }
    }

    // Del PDF
    /*
    #include <stdio.h>
    int main()
    {
        int opcion;
        do
        {
            printf("Menú \n");
            printf("1. Opción 1 \n");
            printf("2. Opción 2 \n");
            printf("3. Opción 3 \n");
            printf("4. Salir \n");
            scanf("%d", &opcion);
            switch (opcion)
            {
            case 1:
                printf("Ingresó a la opción 1 \n");
                break;
            case 2:
                printf("Ingresó a la opción 2 \n");
                break;
            case 3:
                printf("Ingresó a la opción 3 \n");
                break;
            case 4:
                break;
            default:
                printf("Opción no encontrada \n");
            }
        } while (opcion != 4);
    */

    return 0;
}