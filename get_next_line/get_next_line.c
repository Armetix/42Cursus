/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:14:42 by kderhet           #+#    #+#             */
/*   Updated: 2023/02/28 14:14:53 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

void static	put_in_stash(char **stash, char *buff, int check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*stash == NULL)
	{
		*stash = malloc(sizeof(char) * (check + 1));
		if (!*stash)
			return ;
	}
	while ((*stash)[i])
		i++;
	while (buff[j] && j < check)
	{
		(*stash)[i] = buff[j];
		i++;
		j++;
	}
	(*stash)[i] = '\0';
	return ;
}

void static	read_n_stash(int fd, char **stash, int *check)
{
	char	*buff;

	while (!newline_finder(*stash) && *check != 0)
	{
		buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buff)
			return ;
		*check = read(fd, buff, BUFFER_SIZE);
		if ((*stash == NULL && *check == 0) || *check == -1)
		{
			free(buff);
			return ;
		}
		buff[*check] = '\0';
		put_in_stash(stash, buff, *check);
		free(buff);
	}
}

void static	stash_to_line(char *stash, char **line)
{
	int		i;
	int		j;
	char	*p;

	if (stash == NULL)
		return ;
	new_line(line, stash, &p);
	if (!line || !p)
		return ;
	i = 0;
	j = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
		{
			p[j++] = stash[i];
			break ;
		}
		p[j++] = stash[i++];
	}
	(*line) = p;
	(*line)[j] = '\0';
}

void static	stash_cleaner(char **stash)
{
	int	i;
	int	j;

	i = 0;
	while ((*stash)[i])
	{
		if ((*stash)[i] == '\n')
		{
			j = 0;
			i++;
			while ((*stash)[i])
			{
				(*stash)[j++] = (*stash)[i++];
			}
			(*stash)[j] = '\0';
			return ;
		}
		i++;
	}
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			check;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	check = 1;
	line = NULL;
	read_n_stash(fd, &stash, &check);
	if (stash == NULL)
		return (NULL);
	stash_to_line(stash, &line);
	stash_cleaner(&stash);
	return (line);
}