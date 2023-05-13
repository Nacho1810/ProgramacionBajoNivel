typedef struct Cliente
{
    char name[100];
    int age;
    char email[100];

} persona;

typedef struct structNodo
{
    int valor;
    struct structNodo *proximo;
} Nodo;