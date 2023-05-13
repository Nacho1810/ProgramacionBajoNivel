typedef struct Cliente
{
    char name[100];
    int age;
    char email[100];

} persona;

typedef struct Nodos{
    int valor;
    struct Nodos;
} nodo;