#include <stdio.h>
int main()
{
    int num = 12;
    char a[] = __FILE__;
    printf("%d \n", num);
    printf("%s", a);
    return 0;
}