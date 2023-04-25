#include <stdio.h>
int main()
{
    char name[100];
    int age;

    printf("Ingrese su nombre :" );
    scanf("%s", name);
    printf("Ingrese su edad :" );
    scanf("%d", &age);
    printf("Su nombre es: %s.\nSu edad es: %d", name, age );
    
    return 0;
}