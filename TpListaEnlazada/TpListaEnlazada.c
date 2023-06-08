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
#include "list.h"
#include "functions.h"

int main()
{
    
    Lista *miLista = nuevaLista();
    agregNodoFinal(&miLista, 1);
    agregNodoFinal(&miLista, 2);
    agregNodoFinal(&miLista, 3);
    agregNodoFinal(&miLista, 4);
    agregNodoFinal(&miLista, 5);
    agregNodoFinal(&miLista, 6);
    agregNodoFinal(&miLista, 7);

    imprimirLista(miLista);

    eliminarNodo(&miLista, 4);
    eliminarNodo(&miLista, 1);
    eliminarNodo(&miLista, 7);

    imprimirLista(miLista);

    agregElementoOrdenado(&miLista, 8);
    agregElementoOrdenado(&miLista, 6);
    agregElementoOrdenado(&miLista, 4);
    agregElementoOrdenado(&miLista, 7);
    agregElementoOrdenado(&miLista, 1);
    

    imprimirLista(miLista);

    return 0;
}
