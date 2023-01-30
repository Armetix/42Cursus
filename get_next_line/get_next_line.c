#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
    char static *stash;
    char *line;
    char *buffer;
    int i;
    int j;
    int k;
    int l;
    int check;

    i = 0;
    j = 0;
    check = 1;
    buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
        if (!buffer)
            return (NULL);
    line = malloc(sizeof(char) * 250);
    stash = malloc(sizeof(char) * 250);
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    while (check > 0)
    {
        check = read(fd, buffer, BUFFER_SIZE);
        j += check;
        k = 0;   
        while (i < j)
        {
            stash[i] = buffer[k];
            if (stash[i] == '\n')
            {
                l = 0;
                while (l < i)
                {
                    line[l] = stash[l];
                    l++;
                }
                i++;
                return (line);
            }
            i++;
            k++;
        }
        
    }
    if (check == 0)
        return (NULL);
    return (line);
}

#include <stdio.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    int fd1 = open("TestLine.txt", O_RDONLY, 0);
    printf("%s\n", get_next_line(fd1));
    printf("%s\n", get_next_line(fd1));
    return 0;
}
