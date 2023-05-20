// #include <stdio.h>
// #include <malloc.h>
// #include "lista.h"

Lista *crearLista()
{
    Lista *nuevaLista = malloc(sizeof(Lista));

    nuevaLista = NULL;

    return nuevaLista;
}

// pre: lista, pre:siguiente elemento a agregar
void agregarElementoFinal(Lista **miLista, int valorAgregar)
{

    Lista *nuevoElemento = malloc(sizeof(Lista));
    nuevoElemento->valor = valorAgregar;
    nuevoElemento->siguienteElemento = NULL;
    // nuevoElemento->posicionDeElemento = 1;

    // asignarlo al proximo valor de la lista
    if (*miLista == NULL)
    {
        // si no hay ningun elemento
        *miLista = nuevoElemento;
    }
    else
    {
        // buscar el proximo elemento null
        Lista *cursor = *miLista;
        while (cursor->siguienteElemento != NULL)
        {
            cursor = cursor->siguienteElemento;
        }
        cursor->siguienteElemento = nuevoElemento;
    }
}

int obtenerLargoDeLista(Lista *miLista)
{
    int cantElementos = 0;

    Lista *cursor = miLista;
    while (cursor != NULL)
    {
        cantElementos++;
        cursor = cursor->siguienteElemento;
    }

    return cantElementos;
}
void imprimirLista(Lista *miLista)
{
    printf("\nImpresión de elementos:\n \n");
    Lista *cursor = miLista;
    int pos = 1;
    while (cursor != NULL)
    {
        printf("Elemento nº %d: %d\n", pos, cursor->valor);
        pos++;
        cursor = cursor->siguienteElemento;
    }
}

int obtenerPosicionDeElemento(Lista *miLista, int elemento)
{

    Lista *cursor = miLista;
    int pos = 1;
    while (cursor->valor != elemento)
    {
        pos++;
        cursor = cursor->siguienteElemento;
    }
    return pos;
}

int obtenerElementoEnPosición(Lista *miLista, int posicion)
{
    int elemento = -1;

    if (posicion < 1 || posicion > obtenerLargoDeLista(miLista))
    {
        printf("No se encuentra el elemento\n");
    }
    else if (obtenerLargoDeLista(miLista) == 0)
    {
        printf("Lista sin elementos\n");
    }
    else
    {
        Lista *cursor = miLista;
        for (int i = 0; i < posicion - 1; i++)
        {
            cursor = cursor->siguienteElemento;
        }
        elemento = cursor->valor;
    }
    return elemento;
}

// pre: Lista
// pre: dato del nodo a eliminar
void eliminarNodo(Lista **miLista, int valor)
{
    Lista *cursor = *miLista;
    Lista *nodoAnterior = NULL;

    while (cursor->valor != valor && cursor != NULL)
    {
        nodoAnterior = cursor;
        cursor = cursor->siguienteElemento;
    }

    if (cursor == NULL) // No se encuentra el nodo
    {
        printf("El elemento a eliminar no se encuentra en la lista\n");
    }
    else
    {
        if (nodoAnterior == NULL) // Nodo a eliminar: primer elemento
        {
            *miLista = cursor->siguienteElemento;
        }
        else
        { // (Cualquier otro caso) El nodo existe y se encuentra
            nodoAnterior->siguienteElemento = cursor->siguienteElemento;
        }
        free(cursor);
    }
}

// pre: lista, pre:siguiente elemento a agregar
// En proceso
void insertarElementoOrdenado(Lista **miLista, int valor)
{

    Lista *nuevoElemento = malloc(sizeof(Lista));
    nuevoElemento->valor = valor;
    nuevoElemento->siguienteElemento = NULL;

    Lista *cursor = *miLista;
    Lista *nodoAnterior = NULL;

    if (*miLista == NULL )
    {
        *miLista = nuevoElemento;
    }
    if (cursor->valor > valor)
    {
        nuevoElemento->siguienteElemento = *miLista;
        *miLista = nuevoElemento;
    }
    while (cursor != NULL && valor <= cursor->valor)
    {
        nodoAnterior = cursor;
        cursor = cursor->siguienteElemento;
    }

    nuevoElemento->siguienteElemento = nodoAnterior->siguienteElemento;
    nodoAnterior->siguienteElemento = nuevoElemento;

    // nuevoElemento->siguienteElemento = ;
}