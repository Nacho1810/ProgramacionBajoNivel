
// Crea la lista sin nodos
Lista *nuevaLista()
{
    Lista *miLista;

    miLista = NULL;

    return miLista;
}

Lista *crearNodo(int valor)
{
    Lista *nodo = malloc(sizeof(Lista));
    nodo->valor = valor;
    nodo->siguiente = NULL;
    return nodo;
}

// Agrega un nodo al final de la lista siempre
void agregNodoFinal(Lista **cabeza, int valor)
{
    Lista *nodo = crearNodo(valor);

    if (*cabeza == NULL)
    {
        *cabeza = nodo;
    }
    else
    {
        Lista *cursor = *cabeza;
        while (cursor->siguiente != NULL)
        {
            cursor = cursor->siguiente;
        }
        cursor->siguiente = nodo;
    }
}

// Agregar un nodo al principio de la lista siempre
void agregNodoPrincip(Lista **cabeza, int valor)
{
    Lista *nodo = crearNodo(valor);
    nodo->siguiente = *cabeza;
    *cabeza = nodo;
}

// Agrega un elemento de forma ordenada
void agregElementoOrdenado(Lista **miLista, int valor)
{
    // No hay elementos en la Lista

    if (*miLista == NULL)
    {
        agregNodoPrincip(miLista, valor);
    }
    else
    {
        Lista *cursor = *miLista;
        Lista *anterior = NULL;

        while (cursor != NULL && cursor->valor <= valor)
        {
            anterior = cursor;
            cursor = cursor->siguiente;
        }
        if (anterior == NULL || *miLista == NULL)
        {
            agregNodoPrincip(miLista, valor);
        }
        else
        {
            Lista *nodo = crearNodo(valor);
            nodo->siguiente = anterior->siguiente;
            anterior->siguiente = nodo;
        }
    }
}

// Elimina el nodo según el valor
void eliminarNodo(Lista **cabeza, int valor)
{
    Lista *cursor = *cabeza;
    Lista *anterior = NULL;

    if (obtLargoDeLista(*cabeza) == 0)
    {
        printf("La lista no tiene elementos\n");
    }
    while (cursor != NULL && cursor->valor != valor)
    {
        anterior = cursor;
        cursor = cursor->siguiente;
    }
    if (cursor == NULL) // No se encuentra el nodo
    {
        printf("El elemento a eliminar no se encuentra en la lista\n");
    }
    else
    {
        // Nodo a eliminar: primero
        if (anterior == NULL)
        {
            *cabeza = cursor->siguiente;
        }
        else
        {
            anterior->siguiente = cursor->siguiente;
        }
        // Elimina el espacio de memoria
        free(cursor);
    }
}

// Impresión de Lista
void imprimirLista(Lista *miLista)
{
    printf("\nLa Lista tiene %d elementos:\n \n", obtLargoDeLista(miLista));
    Lista *cursor = miLista;
    int i = 1;
    while (cursor != NULL)
    {
        printf("Elemento nº %d: %d\n", i, cursor->valor);
        i++;
        cursor = cursor->siguiente;
    }
}

// Obtiene largo de lista
int obtLargoDeLista(Lista *miLista)
{
    int cantElementos = 0;

    Lista *cursor = miLista;
    while (cursor != NULL)
    {
        cantElementos++;
        cursor = cursor->siguiente;
    }

    return cantElementos;
}

// Obtener elemento en posición N de la Lista
int obtElemento(Lista *miLista, int pos)
{
    int elemento = -1;
    // si la lista no tiene elementos
    if (obtLargoDeLista(miLista) == 0)
    {
        printf("Lista sin elementos\n");
    }
    // si la pos es incorrecta
    else if (pos < 1 || pos > obtLargoDeLista(miLista))
    {
        printf("Posición inexistente\n");
    }
    else
    {
        Lista *cursor = miLista;
        for (int i = 0; i < pos - 1; i++)
        {
            cursor = cursor->siguiente;
        }
        elemento = cursor->valor;
    }
    return elemento;
}

// Obtener posición de X elemento
int obtPosición(Lista *miLista, int elemento)
{

    int pos = -1;
    if (obtLargoDeLista(miLista) == 0)
    {
        printf("Lista sin elementos");
    }
    else
    {
        Lista *cursor = miLista;
        while (cursor != NULL && cursor->valor != elemento)
        {
            pos++;
            cursor = cursor->siguiente;
        }
        if (cursor == NULL)
        {
            printf("El elemento no pertenece a la Lista");
            pos = -1;
        }
    }
    return pos;
}
