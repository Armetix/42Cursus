/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:41:35 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/24 11:59:30 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (size > 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	dest[40] = "";
	char	src[] = "";
	unsigned int	size;

	size = 8;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%lu", strlcpy(dest, src, size));
	return (0);
}*/
