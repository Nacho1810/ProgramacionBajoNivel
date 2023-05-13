#include <stdio.h>
#include <malloc.h>
#include "estructuras.h"

// pre: Lista a modificar, pre: Nodo a modificar, pre: nuevo valor.
void modificarValorDeNodo(Nodo *miNodo, int posicion, int nuevoValor)
{
    for (int i = 0; i < posicion - 1; i++)
    {
        miNodo = miNodo->proximo;
    }

    miNodo->valor = nuevoValor;
}

void agregarNodo(Nodo **lista, int valor)
{
    // agregar el valor al nuevo nodo
    Nodo *nodoNuevo = malloc(sizeof(Nodo));
    nodoNuevo->valor = valor;

    // se inicializa su proximo nodo en null para asegurar que no sea basura
    nodoNuevo->proximo = NULL;

    // asignar este nodo al proximo lugar de la lista
    if (*lista == NULL)
    {
        *lista = nodoNuevo;
    }
    else
    {
        Nodo *cursor = *lista;
        while (cursor->proximo != NULL)
        {
            cursor = cursor->proximo;
        }
        cursor->proximo = nodoNuevo;
    }
}

int main()
{

    Nodo *lista = NULL;

    // lista.valor = 1;

    agregarNodo(&lista, 1);
    agregarNodo(&lista, 8);
    agregarNodo(&lista, 3);
    agregarNodo(&lista, 5);

    printf("%d\n", lista->valor);
    printf("%d\n", lista->proximo->valor);
    printf("%d\n", lista->proximo->proximo->valor);
    printf("%d\n", lista->proximo->proximo->proximo->valor);

    modificarValorDeNodo(lista, 2, 4);

    modificarValorDeNodo(lista, 4, 10);

    printf("%d\n", lista->valor);
    printf("%d\n", lista->proximo->valor);
    printf("%d\n", lista->proximo->proximo->valor);
    printf("%d\n", lista->proximo->proximo->proximo->valor);

    return 0;
}