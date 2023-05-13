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
void agregarElementoPuntero(Lista **miLista, int valorAgregar)
{

    Lista *nuevoElemento = malloc(sizeof(Lista));
    nuevoElemento->valor = valorAgregar;
    nuevoElemento->siguienteElemento = NULL;
    nuevoElemento->posicionDeElemento = 1;

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
        int posic = 2;
        while (cursor->siguienteElemento != NULL)
        {
            posic++;
            cursor = cursor->siguienteElemento;
        }
        cursor->siguienteElemento = nuevoElemento;
        cursor->siguienteElemento->posicionDeElemento = posic;
    }
}
/*
 Lista *agregarElemento(Lista *miLista, int valorAgregar)
 {

    Lista *nuevoElemento = malloc(sizeof(Lista));
    nuevoElemento->valor = valorAgregar;
    nuevoElemento->siguienteElemento = NULL;

    // asignarlo al proximo valor de la lista
    if (miLista == NULL)
    {
        // si no hay ningun elemento
        miLista = nuevoElemento;
    }
    else
    {
        // buscar el proximo elemento null
        Lista *cursor = miLista;
        while (cursor->siguienteElemento != NULL)
        {
            cursor = cursor->siguienteElemento;
        }
        cursor->siguienteElemento = nuevoElemento;
    }
    return miLista;
 }
*/

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
imprimirLista(Lista *miLista)
{
    printf("Impresión de elementos:\n");
    Lista *cursor = miLista;
    int i = 1;
    while (cursor != NULL)
    {
        printf("Elemento nº %d: %d\n", cursor->posicionDeElemento, cursor->valor);
        i++;
        cursor = cursor->siguienteElemento;
    }
}

int obtenerPosicionDeElementoN(Lista *miLista, int elemento){
    
    Lista *cursor = miLista;
    while(cursor->valor != elemento){
        
        cursor = cursor->siguienteElemento;
    }
    return cursor->posicionDeElemento;
    
}

obtenerElementoEnPosiciónN(Lista *miLista, int posicionN)
{
    int elemento = -1;

    if (posicionN < 1 || posicionN > obtenerLargoDeLista(miLista))
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
        for (int i = 0; i < posicionN - 1; i++)
        {
            cursor = cursor->siguienteElemento;
        }
        elemento = cursor->valor;
    }
    return elemento;
}