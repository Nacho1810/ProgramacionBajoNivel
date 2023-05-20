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

    agregElementoOrdenado(&miLista, 8);
    agregElementoOrdenado(&miLista, 6);
    agregElementoOrdenado(&miLista, 4);
    agregElementoOrdenado(&miLista, 1);
    

    imprimirLista(miLista);

    return 0;
}
