/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armetix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:15:07 by armetix           #+#    #+#             */
/*   Updated: 2022/10/25 13:33:02 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != s2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main () {
	char	str1[15];
	char	str2[15];
	int		res;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	res = ft_strncmp(str1, str2, 4);

	if(res < 0) {
		printf("str1 is less than str2");
	} else if(res > 0) {
	printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	return(0);
}
*/
