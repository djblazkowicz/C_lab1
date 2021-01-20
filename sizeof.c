#include <stdio.h>



int main(int arg, char **argv)
{
    short   shortVar;
    int     intVar;
    long    longVar;
    char    charVar;
    float   floatVar;
    double  doubleVar;

    size_t  size;

    size = sizeof(shortVar);

    printf("size of short variable is %zu bytes\n", size);

    size = sizeof(intVar);

    printf("size of int variable is %zu bytes\n", size);

    size = sizeof(longVar);

    printf("size of long variable is %zu bytes\n", size);
    
    size = sizeof(charVar);

    printf("size of char variable is %zu bytes\n", size);

    size = sizeof(floatVar);

    printf("size of float variable is %zu bytes\n", size);
    
    size = sizeof(doubleVar);

    printf("size of double variable is %zu bytes\n", size);
    return 0;
}