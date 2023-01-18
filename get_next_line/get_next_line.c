#include "get_next_line.h"

char *get_next_line(int fd)
{
    char static *stash;
    char *line;

    stash = malloc(sizeof(char) * 25);
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);

    
    read(fd, stash, BUFFER_SIZE);

    return (stash);
}

#include <stdio.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    int fd1 = open("TestLine.txt", O_RDONLY, 0);
    printf("%s\n", get_next_line(fd1));
    return 0;
}
