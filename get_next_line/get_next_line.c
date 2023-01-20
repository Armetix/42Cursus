#include "get_next_line.h"

char *get_next_line(int fd)
{
    char static *stash;
    char *line;
    int i;
    int j;
    int k;
    int check;

    j = 0;
    stash = malloc(sizeof(char) * 250);
    line = malloc(sizeof(char) * 250);
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    check = read(fd, stash, BUFFER_SIZE);
    while (check != 0)
    {
        j += check;
        i = 0;
        //k = 0;
        
        while (i >= j)
        {
            line[i] = stash[k];
            i++;
            k++;
        }
        check = read(fd, stash, BUFFER_SIZE);
    }

    return (line);
}

#include <stdio.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    int fd1 = open("TestLine.txt", O_RDONLY, 0);
    printf("%s\n", get_next_line(fd1));
    return 0;
}
