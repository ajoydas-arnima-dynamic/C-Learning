#include <stdio.h>

int main()
{
    char f[] = __FILE__; // Stores the filename of the source file
    printf("%s \n", f);  // Prints the current filename
    int a[] = {20, 30, 50};
    int len = sizeof(a) / sizeof(a[0]);
    int small = a[0];
    for (int i = 0; i < len; i++)
    {
        if (small < a[i])
        {
            small = a[i];
        }
    }
    printf("%d", small);
    return 0;
}
