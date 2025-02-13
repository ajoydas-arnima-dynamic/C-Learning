#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    // Correct swapping logic
    int temp = a;
    a = b;
    b = temp;

    char f[] = __FILE__; // Stores the filename of the source file

    printf("%d \n", a); // Now prints 20
    printf("%d \n", b); // Now prints 10
    printf("%s", f);    // Prints the current filename

    return 0;
}
