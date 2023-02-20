#include "get_next_line.h"
#include <stdio.h>



void put_in_stash(char *stash, char *buff, int check)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (stash == NULL)
    {
        stash = malloc(sizeof(char) * (check + 1));
        if (!stash)
            return;
    }
    while (stash[i])
        i++;
    while (buff[j] && j < check)
    {
        stash[i] = buff[j];
        i++;
        j++;
    }
    stash[i] = '\0';
    return;
}

void read_n_stash(int fd, char **stash, int *check)
{
    char    *buff;

    while (!newline_finder(*stash) && *check != 0)
    {
        buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        if (!buff)
            return;
        *check = read(fd, buff, BUFFER_SIZE);
        if ((*stash == NULL && *check == 0) || *check == -1)
        {
            free(buff);
            return;
        }
        buff[*check] = '\0';
        put_in_stash(*stash, buff, *check);
        free(buff);
    }
}


void stash_to_line(char *stash, char **line)
{
    int i;
    int j;

    if (stash == NULL)
        return;
    new_line(line, stash);
    if (!line)
        return(NULL);
    while (stash)
    {
        i = 0;
        while (stash[i])
        {
            if (stash[i] == '\n')
            {
                (*line)[j++] = stash[i];
                break;
            }
            (*line)[j++] = stash[i++];
        }
        stash++;
    }
    (*line)[j] = '\0';
}

char *get_next_line(int fd)
{
    static char *stash;
    char        *line;
    int         check;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    check = 1;
    line = NULL;
    //  1. read from fd and put in stash
    read_n_stash(fd, &stash, &check);
    if (stash == NULL)
        return (NULL);
    //  2. put from stash in line
    stash_to_line(stash, &line);
    //  3. clean stash
    return (line);
}

#include <stdio.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    int fd1 = open("TestLine.txt", O_RDONLY, 0);
    printf("%s\n", get_next_line(fd1));
    printf("%s\n", get_next_line(fd1));
    printf("%s\n", get_next_line(fd1));
    return 0;
}
