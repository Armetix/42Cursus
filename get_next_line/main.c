/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:18:29 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/17 13:56:34 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(int argc, char const *argv[])
{
	int		fd;
	int		i;
	char	*test;

	i = 15;
	fd = open("test.txt", O_RDONLY);
	while (i > 0)
	{
		test = get_next_line(fd);
		printf("%s", test);
		i--;
	}
	close(fd);
	return (0);
}
