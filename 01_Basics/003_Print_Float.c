#include <stdio.h>
int main()
{
    float num = 1.2;
    char a[] = __FILE__;
    printf("%f \n", num);
    printf("%s", a);
    return 0;
}