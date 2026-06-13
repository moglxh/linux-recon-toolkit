#include <stdio.h>

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int x = 5;
    int y = 7;

    int z = add(x, y);

    printf("%d\n", z);

    return 0;
}
