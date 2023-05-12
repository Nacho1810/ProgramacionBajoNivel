#include <stdio.h>
#include "estructuras.h"


persona crearPersona()
{
persona persona;
    //Persona cliente;
    printf("Introduce tu nombre: ");
    scanf("%s", persona.name);

    printf("Introduce tu edad: ");
    scanf("%d", &persona.age);

    printf("Introduce tu email: ");
    scanf("%s", persona.email);

    return persona;
}

persona cambiarNombre(persona persona)
{
    //persona newPersona = cliente;
    printf("Cambiar nombre: ");
    scanf("%s", &persona);
    return persona;
    
}

persona cambiarEdad(persona persona)
{
    printf("Cambiar edad: ");
    scanf("%d", &persona.age);
    return persona;
}

persona cambiarEmail(persona persona)
{
    printf("Cambiar email: ");
    scanf("%s", &persona.email);
    return persona;
}

void imprimirPersona(persona persona)
{
    printf("Su nombre es: %s\n", persona.name);
    printf("Su edad es: %d\n", persona.age);
    printf("Su email es: %s\n", persona.email);
}

int main()
{
    persona persona= crearPersona();

    imprimirPersona(persona);

    persona = cambiarNombre(persona);
    imprimirPersona(persona);

    persona = cambiarEdad(persona);
    imprimirPersona(persona);

    persona = cambiarEmail(persona);
    imprimirPersona(persona);

    // Crear una persona y funciones para cambiar datos de personae imprimir los datos

    /* code */
    return 0;
}
