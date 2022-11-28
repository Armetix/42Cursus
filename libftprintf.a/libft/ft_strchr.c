/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armetix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:22:20 by armetix           #+#    #+#             */
/*   Updated: 2022/10/26 12:27:06 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main () {
	const char	str[] = "Ceci n'est pas un Test";
	const char	c = 'u';
	char		*res;
	res = ft_strchr(str, c);
	printf("String after \"%c\" is - \"%s\"\n", c, res);
	return(0);
}
*/
