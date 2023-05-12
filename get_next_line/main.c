/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:18:29 by kderhet           #+#    #+#             */
/*   Updated: 2023/04/25 14:18:32 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(int argc, char const *argv[])
{
	int		fd;
	char	*test;

	fd = open("test.txt", O_RDONLY);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	printf("%s", test);
	test = get_next_line(fd);
	test = get_next_line(fd);
	return (0);
}
