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





int main()
{

    // pruebas

    Lista *miLista = crearLista();
    agregarElementoFinal(&miLista, 1);
    agregarElementoFinal(&miLista, 2);
    agregarElementoFinal(&miLista, 3);
    agregarElementoFinal(&miLista, 4);
    agregarElementoFinal(&miLista, 5);
    agregarElementoFinal(&miLista, 6);
    agregarElementoFinal(&miLista, 7);

    printf("La lista tiene %d elementos\n", obtenerLargoDeLista(miLista));
    imprimirLista(miLista);

    eliminarNodo(&miLista, 7);

    imprimirLista(miLista);

    eliminarNodo(&miLista, 5);

    imprimirLista(miLista);

    eliminarNodo(&miLista, 1);

    imprimirLista(miLista);

    insertarElementoOrdenado(&miLista, 5);

    imprimirLista(miLista);

    /*
        printf("El primer elemento es: %d\n", obtenerElementoEnPosición(miLista, 1));
        printf("El elemento nº 6 es: %d\n", obtenerElementoEnPosición(miLista, 6));
        printf("El elemento nº 7 es: %d\n", obtenerElementoEnPosición(miLista, 7));
        printf("El elemento 11 es el nº %d\n", obtenerPosicionDeElemento(miLista, 11));
    */

    return 0;
}