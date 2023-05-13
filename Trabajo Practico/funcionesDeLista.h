// #include <stdio.h>
// #include <malloc.h>
// #include "lista.h"

Lista *crearLista()
{
    Lista *nuevaLista = malloc(sizeof(Lista));

    nuevaLista = NULL;

    return nuevaLista;
}
// cual lista y que elemento agregar
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
    Lista *cursor = miLista;
    int i = 1;
    while (cursor != NULL)
    {
        printf("Elemento nº %d: %d\n", i, cursor->valor);
        i++;
        cursor = cursor->siguienteElemento;
    }
}

obtenerElementoNDeLista(Lista *miLista, int posicionN)
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