#include <stdio.h>

int multiply(int a, int b)
{
    return a * b + 10;
}

int main()
{
    int result = multiply(6, 7);

    printf("%d\n", result);

    return 0;
}
