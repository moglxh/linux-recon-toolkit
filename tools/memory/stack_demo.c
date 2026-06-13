#include <stdio.h>

void function_b()
{
    int b = 999;
    printf("%d\n", b);
}

void function_a()
{
    int a = 10;
    function_b();
}

int main()
{
    function_a();
    return 0;
}
