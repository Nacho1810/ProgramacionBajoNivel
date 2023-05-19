#include <stdio.h>
#include <malloc.h>
#include "estructuras.h"



Nodo modificarNodo(Nodo *miNodo, int nuevoValor)
{
    miNodo->valor = nuevoValor;
}

Nodo *agregarNodo(Nodo *lista, int valor)
{
    // agregar el valor al nuevo nodo
    Nodo *nodoNuevo = malloc(sizeof(Nodo));
    nodoNuevo->valor = valor;

    // se inicializa su proximo nodo en null para asegurar que no sea basura
    nodoNuevo->proximo = NULL;

    // asignar este nodo al proximo lugar de la lista
    if (lista == NULL)
    {
        lista = nodoNuevo;
    }
    else
    {
        Nodo *cursor = lista;
        while (cursor->proximo != NULL)
        {
            cursor = cursor->proximo;
        }
        cursor->proximo = nodoNuevo;
    }
    return lista;
}


//La memoria de main, siempre reserva la información mientras esta 
// utilizando
int main()
{

    Nodo *lista = NULL;

    // lista.valor = 1;

    lista = agregarNodo(lista, 1);
    lista = agregarNodo(lista, 8);
    lista = agregarNodo(lista, 3);
    lista = agregarNodo(lista, 5);

    printf("%d\n", lista->valor);
    printf("%d\n", lista->proximo->valor);
    printf("%d\n", lista->proximo->proximo->valor);
    printf("%d\n", lista->proximo->proximo->proximo->valor);

    char array[] = "holaSoyNacho";
    char* p = array;

    
    printf("%lu", sizeof(array));
    printf("%lu", sizeof(p));

    // modificarNodo(&primerNodo);

    /*int x = 1;
    int *point = &x;

    printf("%p\n", &x);
    printf("%p\n", point);

    printf("%d", sizeof(point));

    */

    return 0;
}
