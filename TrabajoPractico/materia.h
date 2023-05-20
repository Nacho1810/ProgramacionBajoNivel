typedef enum
{
    FALSE,
    TRUE
} estadoMateria;

typedef struct strucMateria
{

    char[] nombreMateria;
    int comision;
    estadoMateria aprobado = FALSE;
    struct strucMateria;

} Materia;