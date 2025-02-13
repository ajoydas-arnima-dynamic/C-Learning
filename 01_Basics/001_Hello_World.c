#include <stdio.h>
int main(){
    char a[] = __FILE__;
    printf("Hello World \n");
    printf("%s", a);
    return 0;
}