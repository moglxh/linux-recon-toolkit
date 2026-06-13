#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handler(int sig)
{
    printf("Received signal %d\n", sig);
}

int main()
{
    signal(SIGINT, handler);

    while (1)
    {
        sleep(1);
    }

    return 0;
}
