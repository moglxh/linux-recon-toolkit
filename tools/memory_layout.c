#include <stdio.h>
#include <stdlib.h>

int global_var = 100;
int global_uninit;

int main()
{
    int local_var = 10;

    int *heap_var = malloc(sizeof(int));

    printf("Global initialized: %p\n", &global_var);
    printf("Global uninitialized: %p\n", &global_uninit);
    printf("Heap variable: %p\n", heap_var);
    printf("Local variable: %p\n", &local_var);

    free(heap_var);

    return 0;
}
