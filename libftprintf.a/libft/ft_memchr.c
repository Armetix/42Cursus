/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:07:44 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/13 11:47:56 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			i;

	str = (unsigned char *)s;
	search = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main () {
	const char	str[] = "Salut a tous c'est Lasalle";
	const char	ch = 't';
	char		*res;
	res = ft_memchr(str, ch, strlen(str));
	printf("String after \"%c\" is - \"%s\"\n", ch, res);
	return(0);
}
*/
