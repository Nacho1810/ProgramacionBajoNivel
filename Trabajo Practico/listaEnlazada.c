/*
Consigna TP Lista Enlazada

Parte 1:
Hacer la implementación de una lista enlazada.
Debe haber funciones para:
-Crear e inicializar la lista
-Agregar un elemento
-Obtener el largo de la lista
-Obtener un elemento N de la lista
-Eliminar un elemento N de la lista
-Imprimir la lista

Parte 2:
Implementar una lista de enteros ordenada. Cada elemento que agrego queda ordenado en la lista, de manera que al imprimirla se imprime automáticamente ordenada.

Fecha de entrega (parte 1 + parte 2): 2023-05-13
*/

#include <stdio.h>
#include <malloc.h>
#include "lista.h"
#include "funcionesDeLista.h"

// pre: lista, pre:siguiente elemento a agregar
// En proceso

void insertarElemento(Lista **miLista, int posicion, int valor)
{

    Lista *nuevoElemento = malloc(sizeof(Lista));
    nuevoElemento->valor = valor;
    nuevoElemento->siguienteElemento = NULL;

    Lista *cursor = *miLista;
    for (int i = 0; i < posicion; i++)
    {
        cursor = cursor->siguienteElemento;
    }
    cursor->siguienteElemento = nuevoElemento;

    // nuevoElemento->siguienteElemento = ;
}



int main()
{

    // pruebas

    Lista *miLista = crearLista();
    agregarElementoPuntero(&miLista, 1);
    agregarElementoPuntero(&miLista, 2);
    agregarElementoPuntero(&miLista, 3);
    agregarElementoPuntero(&miLista, 4);
    agregarElementoPuntero(&miLista, 5);
    agregarElementoPuntero(&miLista, 6);
    agregarElementoPuntero(&miLista, 7);

    printf("La lista tiene %d elementos\n", obtenerLargoDeLista(miLista));
    imprimirLista(miLista);

    eliminarNodo(&miLista, 7);

    imprimirLista(miLista);

    

    eliminarNodo(&miLista, 5);

    imprimirLista(miLista);

    eliminarNodo(&miLista, 1);

    imprimirLista(miLista);

    /*
        printf("El primer elemento es: %d\n", obtenerElementoEnPosición(miLista, 1));
        printf("El elemento nº 6 es: %d\n", obtenerElementoEnPosición(miLista, 6));
        printf("El elemento nº 7 es: %d\n", obtenerElementoEnPosición(miLista, 7));
        printf("El elemento 11 es el nº %d\n", obtenerPosicionDeElemento(miLista, 11));
    */

    return 0;
}