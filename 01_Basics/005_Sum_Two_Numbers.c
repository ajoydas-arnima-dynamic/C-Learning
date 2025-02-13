#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    char f[] = __FILE__;
    printf("%d \n", a + b);
    printf("%s", f);
    return 0;
}