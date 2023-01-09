#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

char *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE];
    static int start = 0;
    static int end = 0;
    char *line;
    int i;

    if (start == end)
    {
        end = read(fd, buffer, BUFFER_SIZE);
        if (end == 0)
        {
            return NULL;
        }
        start = 0;
    }

    i = start;
    while (i < end && buffer[i] != '\n')
    {
        i++;
    }

    line = malloc(i - start + 1);
    i = 0;
    while (start < end)
    {
        line[i++] = buffer[start++];
        if (buffer[start - 1] == '\n')
        {
            break;
        }
    }
    line[i] = '\0';

    return line;
}
