#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(2, "Usage: ./file_reader <file>\n", 28);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        write(2, "Failed to open file\n", 20);
        return 1;
    }

    char buffer[128];

    ssize_t bytes;

    while ((bytes = read(fd, buffer, sizeof(buffer))) > 0)
    {
        write(1, buffer, bytes);
    }

    close(fd);

    return 0;
}
