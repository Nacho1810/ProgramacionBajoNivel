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

    Lista *miLista = crearLista();

    miLista = agregarElemento(miLista, 1);
    miLista = agregarElemento(miLista, 2);
    miLista = agregarElemento(miLista, 3);
    miLista = agregarElemento(miLista, 3);
    miLista = agregarElemento(miLista, 3);
    miLista = agregarElemento(miLista, 7);

    printf("La lista tiene: %d\n", obtenerLargoDeLista(miLista));

    imprimirLista(miLista);

    printf("El elemento 6 es: %d\n", obtenerElementoNDeLista(miLista, 6));

    // printf("%d\n", miLista->valor);
    // printf("%d\n", miLista->siguienteElemento->valor);
    // printf("%d\n", miLista->siguienteElemento->siguienteElemento->valor);

    return 0;
}