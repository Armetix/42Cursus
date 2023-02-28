/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:27:15 by kderhet           #+#    #+#             */
/*   Updated: 2023/02/28 13:18:43 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	newline_finder(char *stash)
{
	int	i;

	i = 0;
	if (stash == NULL)
		return (0);
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	new_line(char **line, char *stash, char **p)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
		{
			len++;
			break ;
		}
		len++;
		i++;
	}
	*line = malloc(sizeof(char) * (len + 1));
	*p = malloc(sizeof(char) * (len + 1));
	return ;
}
