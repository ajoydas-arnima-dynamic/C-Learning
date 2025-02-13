#include <stdio.h>
int main()
{
    char name[] = "Ajoy Das";
    char a[] = __FILE__;
    printf("%s \n", name);
    printf("%s", a);
    return 0;
}