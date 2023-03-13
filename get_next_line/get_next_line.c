/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:14:42 by kderhet           #+#    #+#             */
/*   Updated: 2023/03/13 12:03:08 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

char static	*put_in_stash(char *stash, char *buff)
{
	char	*temp;

	temp = ft_strjoin(stash, buff);
	free(stash);
	return (temp);
}

char static	*read_n_stash(int fd, char *stash, int *check)
{
	char	*buff;

	if (!stash)
		stash = ft_calloc(1, 1);
	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	while (*check > 0)
	{
		*check = read(fd, buff, BUFFER_SIZE);
		if (*check == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[*check] = 0;
		stash = put_in_stash(stash, buff);
		if (ft_strchr(stash, '\n'))
			break ;
	}
	free(buff);
	return (stash);
}

char static	*stash_to_line(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] && stash[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char static	*stash_cleaner(char *stash)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	if (stash == NULL)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(stash) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (stash[i])
		line[j++] = stash[i++];
	free(stash);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			check;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	check = 1;
	stash = read_n_stash(fd, stash, &check);
	if (stash == NULL)
	{
		free(stash);
		return (NULL);
	}
	line = stash_to_line(stash);
	stash = stash_cleaner(stash);
	return (line);
}
