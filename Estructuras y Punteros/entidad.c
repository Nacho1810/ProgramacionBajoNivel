#include <stdio.h>

struct Entidad
{
    char name[100];
    int age;
    char email[100];

} persona;

void crearPersona()
{
    //Persona cliente;
    printf("Introduce tu nombre: ");
    scanf("%s", persona.name);

    printf("Introduce tu edad: ");
    scanf("%d", &persona.age);

    printf("Introduce tu email: ");
    scanf("%s", persona.email);

    //return cliente;
}

void cambiarNombre()
{
    printf("Cambiar nombre: ");
    scanf("%s", persona.name);
    
}

void cambiarEdad()
{
    printf("Cambiar edad: ");
    scanf("%d", &persona.age);
}

void cambiarEmail()
{
    printf("Cambiar email: ");
    scanf("%s", &persona.email);
}

void imprimirPersona()
{
    printf("Su nombre es: %s\n", persona.name);
    printf("Su edad es: %d\n", persona.age);
    printf("Su email es: %s\n", persona.email);
}

int main()
{
    crearPersona();

    imprimirPersona();

    cambiarNombre();
    imprimirPersona();

    cambiarEdad();
    imprimirPersona();

    cambiarEmail();
    imprimirPersona();

    // Crear una persona y funciones para cambiar datos de personae imprimir los datos

    /* code */
    return 0;
}
