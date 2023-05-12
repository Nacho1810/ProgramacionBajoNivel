#include <stdio.h>




int main()
{

    int x = 1;
    int *point = &x;


    printf("%p\n", &x);
    printf("%p\n", point);

    printf("%d", sizeof(point));
    
    
    return 0;
}
