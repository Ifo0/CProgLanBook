#include <stdio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    long longType;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of long: %ld bytes\n",sizeof(longType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));

    return 0;
}
