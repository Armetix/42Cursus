/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armetix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:12:35 by armetix           #+#    #+#             */
/*   Updated: 2022/10/24 11:46:45 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (str2[i] == '\0')
		return (str1);
	while (str1[i] && i < len)
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			while (str1[i + j] == str2[j] && i + j < len)
			{
				if (str2[j + 1] == '\0')
					return (&str1[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main () {
	const char	haystack[20] = "This is not a joke\0";
	const char	needle[10] = "is\0";
	char		*res;

	res = ft_strnstr(haystack, needle, 25);
	
	printf("The substring is: %s\n", res);

	return(0);
}
*/
